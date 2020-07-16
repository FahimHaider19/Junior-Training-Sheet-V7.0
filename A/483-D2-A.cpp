//https://codeforces.com/contest/483/problem/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r;
    if((r-l)<2) {cout<<-1;return 0;}
    if(r-l==2 && l%2==1 && __gcd(l,l+2)==1) {cout<<-1;return 0;}
    if(l%2!=0) l++;
    cout<<l<<" "<<l+1<<" "<<l+2;
    return 0;
}
