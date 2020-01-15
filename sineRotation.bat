REM @echo off
REM ffmpeg -i %1 -async 1 -y res.mp3
REM ffmpeg -i %1 -qscale:v 2 -vf fps=25 -y output_%%03d.jpg
REM set /a "v=0"
REM for %%i in (output_*) do (
REM 	ffmpeg -i %%i -y outtput_0.jpeg
REM 	call :mid
REM 	rm %%i
REM 	)
REM ffmpeg -start_number 1 -r 25 -i outtput_%%d.jpeg -y res.mp4
REM rm outtput_*
REM ffmpeg -i res.mp4 -i res.mp3 -c:v copy -map 0:v:0 -map 1:a:0 -y -shortest Result.mp4
REM rm res.mp3 res.mp4
REM :mid
REM set /a "v+=1"
REM if 100-%v% GTR 0 do (
REM     ffmpeg -i outtput_0.jpeg -vf "rotate=(100-%v%)*PI/180*sin(2*PI/50*%v%)" -y outtput_%v%.jpeg
REM ) 
REM if 100-%v% LEQ 0 do (
REM     ffmpeg -i outtput_0.jpeg -y outtput_%v%.jpeg
REM )

@echo off
ffmpeg -i %1 -ss 0 -t 4 -vf "rotate=(4-t)*PI/32*sin(2*PI/1*t)" -y outPut1.mp4
ffmpeg -i %1 -ss 0 -t 4 -async 1 -y op1.mp3
ffmpeg -i %1 -ss 4 -async 1 -y op2.mp3
ffmpeg -i outPut1.mp4 -i op1.mp3 -c:v copy -map 0:v:0 -map 1:a:0  -shortest -y op1.mp4
ffmpeg -i %1 -ss 4 -c copy -y outPut2.mp4 
ffmpeg -i outPut2.mp4 -i op2.mp3 -c:v copy -map 0:v:0 -map 1:a:0  -shortest -y op2.mp4
ffmpeg -i op1.mp4 -i op2.mp4 -filter_complex "[0:v:0] [0:a:0] [1:v:0] [1:a:0] concat=n=2:v=1:a=1 [v] [a]" -map "[v]" -map "[a]" -y %2
rm op* outPut*
