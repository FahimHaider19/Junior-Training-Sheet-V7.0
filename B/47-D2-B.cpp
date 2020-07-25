//https://codeforces.com/contest/47/problem/B
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string arr[3],big,small,middle;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        if((arr[i])[1]=='<') reverse(arr[i].begin(),arr[i].end());
        big+=(arr[i])[0];
        small+=(arr[i])[2];
    }
    for(char c='A';c<='C';c++){
        if(count(big.begin(),big.end(),c)==2) big=c;
        if(count(small.begin(),small.end(),c)==2) small=c;
    }
    if(big.length()>1 || small.length()>1){cout<<"Impossible";return 0;}
    if("A"!=big && "A"!=small) {middle="A";}
    else if("B"!=big && "B"!=small) {middle="B";}
    else middle="C";
    if(big==small || big==middle || small==middle){cout<<"Impossible";return 0;}
    cout<<small<<middle<<big;
    return 0;
}
