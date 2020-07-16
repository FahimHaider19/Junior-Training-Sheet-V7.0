//https://codeforces.com/contest/514/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i];i++){
        if(s[i]=='9' && i==0)continue;
        if(s[i]>'4') s[i]='0' + ('9'-s[i]);
    }
    cout<<s;
    return 0;
}