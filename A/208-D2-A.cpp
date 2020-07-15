//http://codeforces.com/contest/208/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i];i++)
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
        }
    
    if(s[0]!=' ') cout<<s[0];
    for(int i=1;s[i];i++) 
        if(s[i]==' ' && s[i-1]==' ') {continue;}
        else cout<<s[i];
    return 0;
}

