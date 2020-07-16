//https://codeforces.com/contest/225/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,x1,x2;
    cin>>n>>x1;
    x2=7-x1;
    bool flag = true;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(x1==a || x1==b || x1==7-a || x1==7-b) {flag=false;break;}
        if(x2==a || x2==b || x2==7-b || x2==7-b) {flag=false;break;}
    }
    if(flag==true){cout<<"YES";}
    else cout<<"NO";
    return 0;
}