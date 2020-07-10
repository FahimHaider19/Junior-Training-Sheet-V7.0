//http://codeforces.com/contest/709/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,b,d,waste=0,count=0;
    cin>>n>>b>>d;
    int arr;
    for(int i=0;i<n;i++) {
        cin>>arr;
        if(arr>b){continue;}
        waste += arr;
        if(waste>d){
            count++;
            waste=0;
        }
    }
    cout << count;
    return 0;
}
