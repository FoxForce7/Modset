params ["_unit"];

private ["_bloodVolume", "_painLevel", "_bleedingState", "_ivBags", "_bloodLossPct", "_bloodLossVol", "_painPct", "_unconscious"];

private ["_patient", "_text", "_textBlood", "_textBleeding", "_textPain", "_textBags", "_textConscious"];

private _round =
{
	params ["_num", "_n"];

	private ["_ret"];

	_ret = ((round (_num * (10 ^ _n))) / (10 ^ _n));

	_ret;
};

_patient = (name _unit);

if (!alive _unit) then
{
	_msg = (format ["<t color='#e60000'>%1 is dead, beyond all hope", _patient]);
	hintSilent (parseText _msg);
}
else
{
	// Retrieve medical data first
	_bloodVolume	= (_unit getVariable "ace_medical_bloodVolume");
	_painLevel		= (_unit getVariable "ace_medical_pain");
	_bleedingState	= (_unit getVariable "ace_medical_isBleeding");
	_ivBags			= (_unit getVariable ["ace_medical_ivBags", 0]);
	_unconscious	= (_unit getVariable "ACE_isUnconscious");

	// Contious
	if (_unconscious) then
	{
		_textConscious = "<t color='#ffff00'>Conscious:<t color='#e60000'> No";
	}
	else
	{
		_textConscious = "<t color='#ffff00'>Conscious:<t color='#80ff00'> Yes";
	};

	// Bleeding
	if (_bleedingState) then
	{
		_bleeding = "Yes";
	}
	else
	{
		_bleeding = "No";
	};

	// Bloodlevel
	if (_bloodVolume < 100) then
	{
		_bloodLossPct = (100 - _bloodVolume);
		_bloodLossVol = (7000 - (7000 * (_bloodVolume / 100)));
		_bloodLossPct = [_bloodLossPct, 1] call _round;
		_bloodLossVol = (round _bloodLossVol);

		_textBlood = (format ["<t color='#ffff00'>Bloodloss: <t color='#e60000'> %1%2 / %3ml", _bloodLossPct, "%", _bloodLossVol]);
	}
	else
	{
		_bloodLossPct = 0;
		_bloodLossVol = 0;

		_textBlood = "<t color='#ffff00'>Bloodloss: <t color='#80ff00'>None";
	};

	// Painlevel
	if (_painLevel > 0) then
	{
		_painPct = (100 - ((1 - _painLevel) * 100));
		_painPct = [_painPct, 1] call _round;

		_textPain = (format ["<t color='#ffff00'>Painlevel: <t color='#e60000'>%1%2", _painPct, "%"]);
		//_textPain = (str _painLevel + "/" + str _painPct);
	}
	else
	{
		_painPct = 0;

		_textPain = "<t color='#ffff00'>Pain: <t color='#80ff00'>None";
	};

	if (_bleedingState) then
	{
		_textBleeding = "<t color='#ffff00'>Bleeding: <t color='#e60000'>Yes";
	}
	else
	{
		_textBleeding = "<t color='#ffff00'>Bleeding: <t color='#80ff00'>No";
	};

	if (typeName _ivBags == "ARRAY") then
	{
		private ["_bagsText", "_bags"];

		_bags = [];

		{
			_bags pushBack (str (_x select 0) + "ml");
		} forEach _ivBags;

		private _bagsText = (_bags joinString " / ");

		_textBags = (format ["<t color='#ffff00'>IVs: <t color='#66b3ff'>%1", _bagsText]);
	}
	else
	{
		_textBags = "<t color='#ffff00'>IVs: <t color='#80ff00'>None";
	};

	_text = (format ["<t size='1.3' align='left' color='#80bfff'>%1's <t size='1.1' color='#0066cc'>Health Status <t size= '1'><br/>%2<br/>%3<br/>%4<br/>%5<br/>%6<br/>%7", _patient, _textConscious, _textBleeding, _textBlood, _textPain, _textBags]);


	[_text] spawn
	{
		params ["_msg"];

		hintSilent (parseText _msg);
		sleep 6;
		hintSilent "";
	};
};
