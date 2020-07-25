//https://codeforces.com/contest/66/problem/B
#include<iostream>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int arr[n],max=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        for(int p=i;p>=0;p--) 
            if(p>0 && arr[p]<arr[p-1])
                {start=p;break;}
        for(int p=i;p<n;p++) 
            if(p<n-1 && arr[p]<arr[p+1])
                {end=p;break;}
        if(end-start>max) max=end-start;
    }
    cout<<++max;
    return 0;
}