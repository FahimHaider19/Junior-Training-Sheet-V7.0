//https://codeforces.com/contest/298/problem/A
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  
    int n;
    string s;
    cin>>n>>s;
    if(count(s.begin(),s.end(),'R')==0) 
        {cout<<s.find_last_of('L')+1<<" "<<s.find_first_of('L');}
    else if(count(s.begin(),s.end(),'L')==0)
        {cout<<s.find_first_of('R')+1<<" "<<s.find_last_of('R')+2;}
    else
        {cout<<s.find_first_of('R')+1<< " "<<s.find_last_of('R')+1;}
    return 0;
}
