#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter file to get mp3 : ";
    string s,r="test.bat ";
    cin>>s;
    r+=s;
    char char_cmd[r.length()];
    for(int i=0;i<r.length();++i) char_cmd[i]=r[i];
    system(char_cmd);
    return 0;
}