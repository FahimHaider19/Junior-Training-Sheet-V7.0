//https://codeforces.com/contest/520/problem/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,count=1;
    string s;
    cin>>n>>s;
    char arr[n];
    for(int i=0;i<n;i++) arr[i]=tolower(s[i]);
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
        if(arr[i]!=arr[i+1]) count++;
    if(count==26){cout<<"YES";}
    else cout<<"NO";
    return 0;
}