@echo off
ffmpeg -i %1 -async 1 -y res.mp3