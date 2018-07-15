
SET projdir=E:\Repositories\FF7\Modset

::del %projdir%\build

::mkdir %projdir%\build\addons

::copy %projdir%\resources\* %projdir%\build
::copy %projdir%\addons\* %projdir%\build\addons

for /d %%a in (src/*) do (
	del %projdir%\build\addons\%%a.pbo

	call "D:\Steam Library\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe" %projdir%\src\%%a %projdir%\build\addons
)