#include<bits/stdc++.h>
using namespace std;
int main(){
	// seperate audio and getFrames..
	cout<<"Enter file to rotate continously : ";
	string s;
	cin>>s;
	string cmd = "getFrames.bat "; cmd += s;
	char char_cmd[cmd.length()];
        strcpy(char_cmd, cmd.c_str());
	system(char_cmd);

	// concatFrames..
	system("concatFrames.bat");
	
	// addAudio..
	system("audioReplace.bat res.mp3 res.mp4");
	system("rm res.mp3 res.mp4");
	return 0;
}
