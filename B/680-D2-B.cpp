//https://codeforces.com/contest/680/problem/B
#include<iostream>
using namespace std;
int main()
{  
    int n,a,caught=0;
    cin>>n>>a;
    a--;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<max(a+1,n-a);i++){
        int cities=0,criminal=0;
        if(a-i>=0) {cities++;criminal+=arr[a-i];}
        if(a+i<n) {cities++;criminal+=arr[a+i];}
        if(cities==criminal) caught+=criminal;
    }
    caught+=arr[a];
    cout<<caught;
    return 0;
}