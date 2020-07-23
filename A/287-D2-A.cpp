//http://codeforces.com/contest/287/problem/A
#include <iostream>
using namespace std;
int main()
{  
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    string s=s1+s2+s3+s4;
    int index=0;
    char arr[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            arr[i][j]=s[index++];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            int count1=0,count2=0;
            if(arr[i][j]=='#') count1++;
            if(arr[i][j+1]=='#') count1++;
            if(arr[i+1][j]=='#') count1++;
            if(arr[i+1][j+1]=='#') count1++;
            if(arr[i][j]=='.') count2++;
            if(arr[i][j+1]=='.') count2++;
            if(arr[i+1][j]=='.') count2++;
            if(arr[i+1][j+1]=='.') count2++;
            if (count1>2 || count2>2) {cout<<"YES";return 0;}
        }           
    cout<<"NO";
    return 0;
}