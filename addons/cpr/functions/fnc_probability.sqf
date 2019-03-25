#include "script_component.hpp"

params ["_caller", "_target"];

//probability for custom cpr success:
private _isMedic = _caller getVariable ["ACE_medical_medicClass", 0];
private _probabilities = missionNamespace getVariable [QGVAR(probabilities), [40,15,5,85]];

//backwards compatibility:
private _onlyDoctors = missionNamespace getVariable [QGVAR(onlyDoctors), 0];
if ( _onlyDoctors isEqualType true ) then {
    _onlyDoctors = if (_onlyDoctors) then {2} else {0};
};
if ( (_onlyDoctors isEqualTo 2 && _isMedic < 2) || (_onlyDoctors > 0 && _isMedic < 1)) exitWith {0};

//probability depends on medicClass of _caller:
private _probability = call {
    if ( _isMedic isEqualTo 2 ) exitWith { _probabilities select 0 };
    if ( _isMedic isEqualTo 1 ) exitWith { _probabilities select 1 };
    _probabilities select 2
};

//exit if probability has been set to 0:
if ( _probability isEqualTo 0 ) exitWith {0};

//if patient has morphine or epinephrine in his circulation, the probability changes depending on amount of medication in system:
private _gotMorphine = _target getVariable ["ace_medical_morphine_insystem",0];
private _gotAtropine = _target getVariable ["ace_medical_atropine_insystem",0];
private _gotAdenosine = _target getVariable ["ace_medical_adenosine_insystem",0];
private _reduction = _gotMorphine+_gotAtropine+_gotAdenosine;
if ( _reduction > 0 ) then {
    private _probabilityGain = 10*_reduction;
    _probability = _probability - (round _probabilityGain);
};

private _gotEpi = _target getVariable ["ace_medical_epinephrine_insystem",0];
if ( _gotEpi > 0 ) then {
    private _probabilityGain = 20*_gotEpi;
    _probability = _probability + (round _probabilityGain);
};

//reduces probability depending on total blood loss of patient:
private _bloodLoss = [_caller, _target] call FUNC(getBloodLoss);
call {
    if (_bloodLoss >= 0.3) exitWith {
        private _probabilityLoss = 10 + (floor random 15);
        _probability = _probability - _probabilityLoss;
    };
    if (_bloodLoss >= 0.15) exitWith {
        private _probabilityLoss = 5 + (floor random 8);
        _probability = _probability - _probabilityLoss;
    };
};

//and let at least a chance of 2%...:
if ( _probability < 1 ) then {
    _probability = 2;
};

_probability;
