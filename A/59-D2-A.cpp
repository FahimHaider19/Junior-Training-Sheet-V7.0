//https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.length(),upper = 0,lower = 0;
    for(int i=0;s[i];i++) 
        if(isupper(s[i])){upper++;}
        else lower++;
    if(upper>lower)
        transform(s.begin(),s.end(),s.begin(),::toupper);
    else
        transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
}