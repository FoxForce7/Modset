
SET projdir=E:\Repositories\FF7\Modset
del %projdir%\build\addons
mkdir %projdir%\build\addons
for /d %%a in (src/*) do (
	echo %%a
	call "D:\Steam Library\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe" %projdir%\src\%%a %projdir%\build\addons
)