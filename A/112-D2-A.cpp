//https://codeforces.com/contest/112/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s2.length();i++)
        s2[i] = tolower(s2[i]);
    if(s1>s2) {cout<<1;}
    else if(s1==s2) {cout<<0;}
    else cout<<-1;
}