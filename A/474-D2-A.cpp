//https://codeforces.com/contest/474/problem/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./",str;
    int len=s.length();
    char arr[len];
    for(int i=0;i<len;i++) arr[i]=s[i];
    
    char ch;
    cin>>ch>>str;
    for(int i=0;str[i];i++){
        char alphabet=str[i];
        char* p=find(arr,arr+len,alphabet);
        if(ch=='R'){cout<<*(p-1);}
        else cout<<*(p+1);
    }
    return 0;
}