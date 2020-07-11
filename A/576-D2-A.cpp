//https://codeforces.com/contest/567/problem/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);

    int Min[n]={arr[1]-arr[0]};
    int Max[n]={arr[n-1]-arr[0]};
    
    for(int i=1;i<n-1;i++){
        Min[i]=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
        Max[i]=max(arr[i]-arr[0],arr[n-1]-arr[i]);
    }

    Min[n-1]={arr[n-1]-arr[n-2]};
    Max[n-1]={arr[n-1]-arr[0]};

    
    for(int i=0;i<n;i++) cout<<Min[i]<<" "<<Max[i]<<endl;
    return 0;
}