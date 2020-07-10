//https://codeforces.com/contest/731/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch='a';
    int sum=0;
    for(int i=0;s[i];i++){
        if(abs(ch-s[i])<13) {sum+=abs(s[i]-ch);}
        else sum+=26-abs(ch-s[i]);
        ch=s[i];
    }
    cout<<sum;
}