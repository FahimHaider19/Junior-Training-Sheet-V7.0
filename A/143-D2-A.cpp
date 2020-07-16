//https://codeforces.com/contest/143/problem/A
#include <iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int arr[2][2];
    bool flag=false;
    for(int i=1;i<=9;i++){
        arr[0][0]=i;
        arr[0][1]=r1-i;
        arr[1][0]=c1-i;
        arr[1][1]=d1-i;

        if(arr[0][1]<1 || arr[1][0]<1 || arr[1][1]<1 || arr[0][1]>9 || arr[1][0]>9 || arr[1][1]>9) continue;
        if(arr[0][0]+arr[0][1] != r1) continue;
        if(arr[1][0]+arr[1][1] != r2) continue;
        if(arr[0][0]+arr[1][0] != c1) continue;
        if(arr[0][1]+arr[1][1] != c2) continue;
        if(arr[0][0]+arr[1][1] != d1) continue;
        if(arr[0][1]+arr[1][0] != d2) continue;

        if(arr[0][0]==arr[0][1] || arr[0][0]==arr[1][0] || arr[0][0]==arr[1][1] || arr[0][1]==arr[1][0] || arr[0][1]==arr[1][1] || arr[1][0]==arr[1][1]) continue;
        flag=true;
        break;
    }
    if(flag==false) {cout<<-1;return 0;}
    cout<<arr[0][0]<<" "<<arr[0][1]<<"\n"<<arr[1][0]<<" "<<arr[1][1];
    return 0;
}