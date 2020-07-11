//https://codeforces.com/contest/160/problem/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,sum=0,coins=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {cin>>arr[i];sum+=arr[i];}
    sort(arr,arr+n,greater<int>());
    for(int i=0,total=0;total<=sum/2.0;i++){
        total+=arr[i];
        coins++;
    }
    cout<<coins;
    return 0;
}