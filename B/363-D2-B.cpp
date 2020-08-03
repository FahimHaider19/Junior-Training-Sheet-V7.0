//http://codeforces.com/contest/363/problem/B
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int h[n];
    for(int i=0;i<n;i++) {
        cin>>h[i];
        if(i<k) sum+=h[i];
    }
    int Min=sum,index=0;
    for(int i=1;i<=n-k;i++){
        sum-=h[i-1];
        sum+=h[i+k-1];
        if(sum<Min){
            Min=sum;
            index=i;
        }
    }
    cout<<index+1;
    return 0;
}
