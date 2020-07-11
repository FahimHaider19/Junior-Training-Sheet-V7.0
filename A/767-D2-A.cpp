//https://codeforces.com/problemset/problem/767/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int next=n;
    bool arr[n]={0};
    while(n--){
        int a;
        cin>>a;
        arr[a-1]=1;
        for(int i=next-1;i>=0;i--){
            if(arr[i]==0) {next=i+1;break;}
            cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}