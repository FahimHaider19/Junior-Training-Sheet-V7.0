//codeforces.com/contest/43/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string team1,team2;
    int goal1=1,goal2=0;
    cin>>team1;
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        if(s==team1) {goal1++;}
        else{team2=s;goal2++;}
    } 
    if(goal1>goal2) {cout<<team1;}
    else cout<<team2;
    return 0;
}

