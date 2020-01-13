@echo off
ffmpeg -i %1 -async 1 -y res.mp3
ffmpeg -i %1 -qscale:v 2 -vf fps=25 -y output_%%03d.jpg
set /a "v=0"
:loop 
for %%i in (output_*) do (
	ffmpeg -i %%i -y outtput_0.jpeg
	call :mid
	rm %%i
	)
:mid
set /a "v+=1"
ffmpeg -i outtput_0.jpeg -vf "rotate=%v%*PI/180" -y outtput_%v%.jpeg
