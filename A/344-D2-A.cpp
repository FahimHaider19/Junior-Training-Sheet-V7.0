https://codeforces.com/contest/344/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,group=1;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (i>0 && arr[i-1]!=arr[i]) group++;
    }
    cout<<group;
}