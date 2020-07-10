https://codeforces.com/contest/791/problem/A
#include <iostream>
using namespace std;
int main()
{
    int a,b,year=0;
    cin>>a>>b;
    while(true){
        a*=3;
        b*=2;
        year++;
        if(a>b) break;
    }
    cout<<year;
    return 0;
}