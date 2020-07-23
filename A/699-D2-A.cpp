//http://codeforces.com/contest/699/problem/A
#include <iostream>
using namespace std;
int main()
{  
    int n;
    string s;
    cin>>n>>s;
    int arr[n],min=INT_MAX;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;s[i];i++){
        if(i>0 && s[i-1]=='R' && s[i]=='L'){
            int val=(arr[i]-arr[i-1])/2;
            if(val<min) min=val;
        }
    }
    if(min==INT_MAX) {cout<<-1;}
    else cout<<min;
    return 0;
}