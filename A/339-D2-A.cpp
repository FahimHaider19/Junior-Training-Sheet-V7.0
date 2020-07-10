//codeforces.com/contest/339/problem/A
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.size() % 2 == 0 ? s.size()/2 : s.size()/2+1;
    char arr[len];
    for(int i=0;s[i];i+=2) arr[i/2]=s[i];
    sort(arr,arr+len);
    cout<<arr[0];
    for(int i=1;i<len;i++)cout<<"+"<<arr[i];
}
