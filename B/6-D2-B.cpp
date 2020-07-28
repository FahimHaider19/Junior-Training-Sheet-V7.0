//https://codeforces.com/contest/6/problem/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,sum=0;
    char ch;
    cin>>n>>m>>ch;
    char arr[n][m];
    vector<char>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++) arr[i][j]=s[j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==ch){
                if(i+1<n && arr[i+1][j]!='.') v.push_back(arr[i+1][j]);
                if(i-1>=0 && arr[i-1][j]!='.') v.push_back(arr[i-1][j]);
                if(j+1<m && arr[i][j+1]!='.') v.push_back(arr[i][j+1]);
                if(j-1>=0 && arr[i][j-1]!='.') v.push_back(arr[i][j-1]);
            }
        }
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()-count(v.begin(),v.end(),ch);
    return 0;
}
