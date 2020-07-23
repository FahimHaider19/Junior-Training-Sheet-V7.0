//https://codeforces.com/contest/579/problem/A
#include<iostream>
using namespace std;
int main()
{  
    long long n,result=0;
    cin>>n;
    while(n){
        if(n%2==1) result++;
        n/=2;
    }
    cout<<result;
    return 0;
}