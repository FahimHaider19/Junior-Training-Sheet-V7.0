//http://codeforces.com/contest/228/problem/A
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    long arr[4];
    int count=0;
    for(int i=0;i<4;i++)cin>>arr[i];
    sort(arr,arr+4);
    for(int i=0;i<4;i++)
        if (arr[i] == arr[i - 1])
            count++;
    cout<<count;
}