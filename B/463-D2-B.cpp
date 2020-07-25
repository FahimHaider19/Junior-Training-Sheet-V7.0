//https://codeforces.com/contest/463/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,energy=0,dollar=0;
    cin>>n;
    int arr[n+1]={0};
    for(int i=1;i<n+1;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            if(energy<arr[i+1]-arr[i]) {arr[i]+=energy;energy=0;}
            else {energy-=arr[i+1]-arr[i];arr[i]=arr[i+1];}
            dollar+=arr[i+1]-arr[i];
            arr[i]+=arr[i+1]-arr[i];
        }
        energy+=arr[i]-arr[i+1];
    }
    cout<<dollar;
    return 0;
}