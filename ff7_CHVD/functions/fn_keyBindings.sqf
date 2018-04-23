#include "\a3\editor_f\Data\Scripts\dikCodes.h"


_textOpenSettings = if (isLocalized "STR_chvd_openSettings") then {localize "STR_chvd_openSettings"} else {"Open view distance settings"};
_openSettingsKey = ["CH View Distance", "open_settings", _textOpenSettings, {call CHVDAddon_fnc_openDialog}, "", [DIK_BACKSLASH, [false, true, false]], false] call CBA_fnc_addKeybind;


_useShift = _openSettingsKey select 1 select 0;
_useCtrl = _openSettingsKey select 1 select 1;
_useAlt = _openSettingsKey select 1 select 2;

_SCAstring = (if (_useShift) then {"Shift + "} else {""}) + (if (_useCtrl) then {"Ctrl + "} else {""}) + (if (_useAlt) then {"Alt + "} else {""});

