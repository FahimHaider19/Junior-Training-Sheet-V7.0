//http://codeforces.com/contest/9/problem/A
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int p = (a>b) ? (6 - a + 1) : (6 - b + 1),q=6;
    if(p%2==0) {p/=2;q/=2;}
    if(p%3==0) {p/=3;q/=3;}
    cout<<p<<"/"<<q;
}