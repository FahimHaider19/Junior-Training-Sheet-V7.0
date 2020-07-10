//https://codeforces.com/contest/381/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,S=0,D=0,first=0;
    cin>>n;
    int last = n-1;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;first<=last;i++){
        S += max(arr[first],arr[last]);
        if(arr[first]>arr[last]) {first++;}
        else last--;

        if(first>last) break;

        D += max(arr[first], arr[last]);
        if (arr[first] > arr[last]) {first++;}
        else last--;
    }
    cout<<S<<" "<<D;
}