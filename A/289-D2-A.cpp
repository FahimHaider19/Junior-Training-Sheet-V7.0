//http://codeforces.com/contest/289/problem/A
#include <iostream>
#include<cmath>
using namespace std;
int main()
{  
    int n,k,x=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        x+=(r-l+1);
    }
    if(x%k==0){cout<<0;}
    else cout<<(ceil((float)x/k)*k - x);
    return 0;
}