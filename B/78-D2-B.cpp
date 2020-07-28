//https://codeforces.com/contest/78/problem/B
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="ROYGBIV";
    for(int i=0;n/7<n;i++) cout<<s;
    if(n%7==1){cout<<"G";}
    else if(n%7==2){cout<<"GB";}
    else if(n%7==3){cout<<"YGB";}
    else if(n%7==4){cout<<"YGBI";}
    else if(n%7==5){cout<<"OYGBI";}
    else if(n%7==6){cout<<"OYGBIV";}
    return 0;
}
