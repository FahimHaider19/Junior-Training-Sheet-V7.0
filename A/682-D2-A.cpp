//https://codeforces.com/contest/682/problem/A
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    long long count=0;
    cin>>n>>m;
    if(n>m) swap(n,m);
    for(int i=1;i<=n;i++){
        count+=(i+m)/5;
        if(i>=5) count-=i/5;
    }
    cout<<count;
    return 0;
}



/* SIMPLIFIED,BUT RESULTS IN TLE :)
#include <iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    if(n>m) swap(n,m);
    for(int i=1;i<=n;i++){
        for(int j=1;j*5<=(n+m);j++){
            if(j*5-i<=m && j*5-i>0) count++;
        }
    }
    cout<<count;
    return 0;
}
*/