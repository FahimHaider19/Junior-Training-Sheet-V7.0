//https://codeforces.com/contest/768/problem/A
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int result=n-count(arr,arr+n,arr[0])-count(arr,arr+n,arr[n-1]);
    if(result>0) {cout<<result;}
    else cout<<0;
    return 0;
}