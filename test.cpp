#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter file to add animation : ";
    string s,res,r="sineRotation.bat ";
    cin>>s;
    r+=s;
    cout<<"Enter result file name : ";
    cin>>res;
    r+=" "; r+=res;
    char char_cmd[r.length()];
    for(int i=0;i<r.length();++i) char_cmd[i]=r[i];
    system(char_cmd);
    return 0;
}