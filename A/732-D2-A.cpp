//http://codeforces.com/contest/732/problem/A
#include <iostream>
using namespace std;
int main()
{
    int k,r,n=1;
    cin>>k>>r;
    while(true){
        if(n*k%10==0 || (n*k-r)%10==0) break;
        n++;
    }
    cout<<n;
}