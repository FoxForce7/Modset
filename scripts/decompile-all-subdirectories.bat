for /d /r %%a in (*) do (
	call "D:\Steam Library\steamapps\common\Arma 3 Tools\CfgConvert\CfgConvert.exe" -txt %%a\config.bin
	del %%a\config.bin
)