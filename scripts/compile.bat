
SET projdir=E:\Repositories\FF7\Modset

SET tools="D:\Steam Library\steamapps\common\Arma 3 Tools" 

SET addonBuilder="D:\Steam Library\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe" 

::del %projdir%\build

::mkdir %projdir%\build\addons

::copy %projdir%\resources\* %projdir%\build
::copy %projdir%\addons\* %projdir%\build\addons

for /d %%a in (src/*) do (
	del %projdir%\build\addons\%%a.pbo

	call %addonBuilder% %projdir%\src\%%a %projdir%\build\addons
)