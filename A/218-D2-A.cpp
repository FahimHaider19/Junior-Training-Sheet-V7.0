//https://codeforces.com/contest/218/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[2*n+1];
    for(int i=0;i<2*n+1;i++) cin>>arr[i];
    while(k>0){
        for(int i=0;i<(2*n+1)-2;i+=2)
            if(arr[i]<arr[i+1]-1 && arr[i+1]-1>arr[i+2]){
                arr[i+1]--;
                k--;
                if(k==0) break;
            }
        
    }
    for(int i=0;i<2*n+1;i++) cout<<arr[i]<<" ";
    return 0;
}