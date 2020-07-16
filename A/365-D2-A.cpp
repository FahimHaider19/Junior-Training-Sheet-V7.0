//https://codeforces.com/contest/365/problem/A
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,Count=0;
    char k;
    cin>>t>>k;
    while(t--){
        string num;
        bool good=true;
        cin>>num;
        int len=num.length();
        for(char i='0';i<=k;i++)
            if(count(num.begin(),num.end(),i)<1) {good=false;break;}
        if(good==true) Count++;
    }
    cout<<Count;
    return 0;
}