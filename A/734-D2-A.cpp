//https://codeforces.com/contest/734/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,a=0,d=0;
    string s;
    cin>>n>>s;
    for(int i=0;s[i];i++){
        if(s[i]=='A'){a++;}
        else d++;
    }
    if(a>d) {cout<<"Anton";}
    else if(d>a) {cout<<"Danik";}
    else cout<<"Friendship";
    return 0;
}