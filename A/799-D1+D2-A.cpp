//codeforces.com/contest/799/problem/A
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,t,k,d,oneOven,twoOven,diff=-1,time=0,total=0;
    cin>>n>>t>>k>>d;
    oneOven = ceil((float)n/k)*t;
    for(int i=0;diff<0;i++) diff=i*t-d;
    while(true){
        if(time>=d){
            time+=t-diff;
            total+=k;
        }
        if(total>=n) break;
        time>=d ? time+=diff : time+=t;
        total+=k;
        if(total>=n) break;
    }
    if(oneOven>time) {cout<<"YES";}
    else cout<<"NO";
}