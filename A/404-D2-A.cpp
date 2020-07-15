//https://codeforces.com/contest/404/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char diagonal,other;
    bool x=true;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            if(i==0 && j==0) diagonal=s[j];
            if(i==0 && j==1) other=s[j];
            if(diagonal==other) {x=false;break;}
            if(j==i && s[j]!=diagonal) {x=false;break;}
            else if(j==n-1-i && s[j]!=diagonal) {x=false;break;}
            else if((j!=i && j!=n-1-i) && s[j]!=other) {x=false;break;}
        }
    }
    if(x==true) {cout<<"YES";}
    else cout<<"NO";
    return 0;
}

