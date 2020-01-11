ffmpeg -i %2 -i %1 -c:v copy -map 0:v:0 -map 1:a:0 -y -shortest output.mp4
