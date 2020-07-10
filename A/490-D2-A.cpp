//http://codeforces.com/contest/490/problem/A
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n,index = 1;
    cin>>n;
    vector<int>prog,math,pe;
    while(n--){
        int a;
        cin>>a;
        if(a==1) {prog.push_back(index);}
        else if(a==2){math.push_back(index);}
        else pe.push_back(index);
        index++;
    }
    int minimum=min(prog.size(),min(math.size(),pe.size()));
    cout<<minimum<<endl;
    for(int i=0;i<minimum;i++)
        cout<<prog[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
    return 0;
}
