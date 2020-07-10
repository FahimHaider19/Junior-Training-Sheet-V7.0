//http://codeforces.com/contest/265/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int len = t.length(),count=1;
    for(int i=0;i<len;i++)
        if(s[count-1]==t[i]) count++;
    cout<<count;
}