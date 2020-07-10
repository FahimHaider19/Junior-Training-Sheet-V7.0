//http://codeforces.com/contest/71/problem/A
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin>>s;
        int len =  s.length();
        if(len>10){cout<<s[0]<<len-2<<s[len-1]<<endl;}
        else cout<<s<<endl;
    }
    return 0;
}