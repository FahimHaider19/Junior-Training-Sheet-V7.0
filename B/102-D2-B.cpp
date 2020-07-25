//https://codeforces.com/contest/102/problem/B
#include <iostream>
using namespace std;
int main()
{
    string s;
    int count = 0;
    cin>>s;
    while (s.length() != 1)
    {
        int sum = 0;
        for (int i=0;s[i];i++) sum+=s[i]-'0';
        s = to_string(sum);
        count++;
    }
    cout<<count;
    return 0;
}