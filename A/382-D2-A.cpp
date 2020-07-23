//http://codeforces.com/contest/382/problem/A
#include <iostream>
using namespace std;
int main()
{  
    string s1,s2;
    cin>>s1>>s2;
    string sub1=s1.substr(0,s1.find('|'));
    string sub2=s1.substr(s1.find('|')+1,s1.length());
    int total=s1.length()+s2.length()-1;
    if(total%2==0){
        for(int i=0;i<s2[i];i++){
            if(sub1.length()<total/2) sub1+=s2[i];
            else if(sub2.length()<total/2) sub2+=s2[i];
        }
        if(sub1.length()==sub2.length()){cout<<sub1<<'|'<<sub2;}
        else cout<<"Impossible";
    }
    else cout<<"Impossible";
    return 0;
}