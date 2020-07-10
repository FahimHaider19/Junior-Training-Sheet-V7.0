//http://codeforces.com/contest/770/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    char ch ='a';
    while(n--){
        if(count%k==0) count=0;
        cout<<(char)(ch+count);
        count++;
    }
    return 0;
}
