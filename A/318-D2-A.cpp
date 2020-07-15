//http://codeforces.com/contest/318/problem/A
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,k,add=-1;
    cin>>n>>k;
    if(k>ceil(n/2.0)) {k-=ceil(n/2.0);add=0;}
    cout<<2*k+add;
    return 0;
}

