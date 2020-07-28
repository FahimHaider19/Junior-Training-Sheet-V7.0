//https://codeforces.com/contest/746/problem/B
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    vector<char>result;

    if(n%2==1)
        for(int i=0;i<n;){
            if(i%2==0 && i<n) result.push_back(s[i++]);
            if(i%2==1 && i<n) result.insert(result.begin(),s[i++]);
        }
    else // n%2==0
        for(int i=0;i<n;){
            if(i%2==1 && i<n) result.push_back(s[i++]);
            if(i%2==0 && i<n) result.insert(result.begin(),s[i++]);
        }
    for(int i=0;i<result.size();i++) cout<<result[i];
    return 0;
}
