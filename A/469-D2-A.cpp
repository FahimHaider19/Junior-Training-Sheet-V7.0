//http://codeforces.com/contest/469/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool arr[n]={false},missing=false;
    int p;
    cin>>p;
    while(p--){
        int a;
        cin>>a;
        arr[a-1]=true;
    }
    cin >> p;
    while (p--)
    {
        int a;
        cin >> a;
        arr[a-1] = true;
    }
    for(int i=0;i<n;i++) if(arr[i]==false) missing=true;
    if(missing) {cout<<"Oh, my keyboard!";}
    else cout<<"I become the guy.";
    return 0;
}

