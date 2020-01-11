#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
	// fastIO;
	cout<<"Manual : \n";
	cout<<"\t press - 1 to trim.\n";
	cout<<"\t press - 2 to join.\n";
	cout<<"\t press - 3 to add other audio stream.\n";
	cout<<"\t press - 4 to remove audio stream.\n";
	cout<<"\t press - 5 to random edit.\n";
	int q; cin>>q;
	if(q==1) {
		cout<<"Enter path of file to trim : ";
		string file; cin>>file;
		cout<<"Enter starting point and trim lengt (both in sec): ";
		int l,s; cin>>s>>l;
		// cout<<l<<' '<<s<<'\n';
		string L, S;
		stringstream ss,ss1;
		ss<<l; ss>>L; // converting int 'l' to string.
		ss1<<s; ss1>>S; // converting int 's' to string.
		string cmd = "trim.bat ";
		cmd += S;
		cmd += " ";
		cmd += L; // cout<<cmd<<'\n';
		cmd += " "; cmd += file;
		char char_cmd[cmd.length()];
		strcpy(char_cmd, cmd.c_str());
		// cout<<cmd<<'\n';
		// pass l, s to trim.bat as parameters.
		// for(int i=0;i<cmd.length();++i) cout<<char_cmd[i]<<' ';
		// cout<<'\n';
		system(char_cmd);
	}
	else if(q==2){
		// to concat ..
		cout<<"Enter no. of files to concat : ";
		int n; cin>>n;
		cout<<"Enter files to concat : ";
		string fs,s;
		s = "concat.bat ";
		for(int i=0;i<n;++i) cin>>fs, s+=fs, s+=" ";
		cout<<s<<'\n';
		char char_cmd[s.length()];
		strcpy(char_cmd, s.c_str());
		system(char_cmd);
	}
	else if(q==3){
		// to replace audio..
		string aud_f, vid_f, s;
		cout<<"Enter audiofile and videofile : ";
		cin>>aud_f>>vid_f;
		s = "audioReplace.bat ";
		s+=aud_f, s+=" ", s+=vid_f;
		char char_cmd[s.length()];
                strcpy(char_cmd, s.c_str());
                system(char_cmd);
	}
	return 0;
}
