//https://codeforces.com/contest/263/problem/A
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=1;
    while(true){
        int x;
        cin>>x;
        i++;
        if (x == 1) break;
        if(i>0 && i%5==0) {j++;i=0;} 
    }
    cout<<abs(3-i)+abs(3-j);
    return 0;
}