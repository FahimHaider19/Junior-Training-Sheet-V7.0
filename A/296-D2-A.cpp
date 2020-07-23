//https://codeforces.com/contest/296/problem/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+1);
    for(int i=0;i<n-1;i++)
        if(arr[i]!=arr[i+1]){continue;}
        else if(count(arr,arr+n,arr[i])>(n+1)/2) {cout<<"NO";return 0;}
    cout<<"YES"; 
    return 0;
}