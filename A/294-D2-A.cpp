//http://codeforces.com/contest/294/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        if(x>1) arr[x-1-1]+=y-1;
        if(x<n) arr[x]+=arr[x-1]-y;
        arr[x-1]=0;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}