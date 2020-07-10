//https://codeforces.com/contest/677/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,h,width =0;
    cin>>n>>h;
    while(n--){
        int i;
        cin>>i;
        if(i>h) {width+=2;}
        else width++;
    }
    cout<<width<<endl;
    return 0;
}