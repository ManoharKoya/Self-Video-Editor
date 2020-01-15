#include<bits/stdc++.h>
using namespace std;
int main(){
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
    return 0;
}