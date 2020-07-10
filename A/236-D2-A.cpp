//https://codeforces.com/contest/236/problem/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.length(),count = 0;
    char arr[len];
    for(int i=0;i<len;i++) arr[i]=s[i];
    sort(arr,arr+len);
    for(int i=0;i<len-1;i++)
        if(arr[i]==arr[i+1]){continue;}
        else count++;
    if(count%2!=0) {cout <<"CHAT WITH HER!";}
    else
        cout << "IGNORE HIM!";
}
