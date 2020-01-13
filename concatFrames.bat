@echo off
ffmpeg -start_number 1 -r 25 -i outtput_%%d.jpeg -y res.mp4
rm outtput_*