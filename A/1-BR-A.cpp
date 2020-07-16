//https://codeforces.com/contest/1/problem/A
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long n,m,a;
    cin>>n>>m>>a;
    long long result=ceil((double)n/a)*ceil((double)m/a);
    cout<<result;
    return 0;
}