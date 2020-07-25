//https://codeforces.com/contest/16/problem/B
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{  
    int n,m,matches=0;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0;i<m;i++){
        matches+=min(n,v[i].second)*v[i].first;
        n-=v[i].second;
        if(n<1) break;
    }
    cout<<matches;
    return 0;
}