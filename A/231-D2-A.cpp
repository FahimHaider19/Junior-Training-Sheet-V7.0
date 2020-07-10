https://codeforces.com/contest/231/problem/A
#include <iostream>
using namespace std;
int main()
{
    int t, solved = 0;
    cin>>t;
    while (t--){
        int sum=0,i=3;
        while(i--) {int i;cin>>i;sum+=i;}
        if(sum>1) solved++;
    }
    cout<<solved;
    return 0;
}