//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    while(true){
        int n;
        cin >> n;
        if(n==0) break;
        int i=sqrt(n);
        cout<<(i*i==n?"yes":"no")<<endl;
    }
    return 0;
}
