//http://codeforces.com/contest/707/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char ch;
    bool colorful=false;
    for(int i=0;i<n;i++)
        for(int i=0;i<m;i++){
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y') colorful=true;
        }
    if(colorful==true){cout<<"#Color";}
    else cout<<"#Black&White";
    return 0;
}

