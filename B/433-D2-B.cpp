//http://codeforces.com/contest/433/problem/B
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    long long cheapest[n],sum[n]={0};
    for(int i=0;i<n;i++) {
        cin>>cheapest[i];
        sum[i]=cheapest[i];
        if(i==0) continue;
    }
    sort(cheapest,cheapest+n);
    for(int i=1;i<n;i++){
        sum[i]+=sum[i-1];
        cheapest[i]+=cheapest[i-1];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){ 
            cout<<sum[r-1]-((l-2)<0 ? 0:sum[l-2])<<endl;
        }
        else cout<<cheapest[r-1]-((l-2)<0 ? 0:cheapest[l-2])<<endl;
    }
    return 0;
}
