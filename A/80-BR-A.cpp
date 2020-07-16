//https://codeforces.com/contest/80/problem/A
#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int a)
{
    for(int i=2;i<=sqrt(a) || i==2;i+=2){
        if(a%i==0) return false;
        if(i==2) i=1;
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(is_prime(m)==false){cout<<"NO";return 0;}
    for(int i=m-1;i>n;i--)
        if(is_prime(i)==true) {cout<<"NO";return 0;}
    cout<<"YES";
    return 0;
}