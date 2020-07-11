//https://codeforces.com/contest/766/problem/A
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){cout<<-1;}
    else cout<<max(s1.length(),s2.length());
    return 0;
}