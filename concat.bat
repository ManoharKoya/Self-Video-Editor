touch my_vid_list.txt
for %%i in (%*) do ( 
	echo file '%%~i' >> my_vid_list.txt
)
ffmpeg -f concat -safe 0 -i my_vid_list.txt -c copy -y output.mp4
rm my_vid_list.txt
