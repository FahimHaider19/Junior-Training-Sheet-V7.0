//http://codeforces.com/contest/443/problem/A
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<char>v;
    int count=0;
    for(char c : s) 
        if(c>='a' && c<='z') v.push_back(c);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        if(i+1<=v.size() && v[i]==v[i+1]) {continue;}
        else count++;
        cout<<count;
}
