//http://codeforces.com/contest/686/problem/A
#include <iostream>
using namespace std;
int main()
{
    long long x;
    int n;
    cin>>n>>x;
    long long remaining = x, distressed = 0;
    while(n--){
        char ch;
        long long d;
        cin>>ch>>d;
        if(ch=='+') remaining+=d;
        else if(remaining>=d){remaining-=d;}
        else distressed++;
    }
    cout<<remaining<<" "<<distressed;

}
