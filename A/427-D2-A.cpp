//https://codeforces.com/contest/427/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,free=0,crime=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        int p;
        cin>>p;
        if(p!=-1) free+=p;
        else if(p==-1)
            if(free>0){free--;}
            else crime++;
    }
    cout<<crime;
}