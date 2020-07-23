//https://codeforces.com/contest/1237/problem/A
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int input[n],output[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>input[i];
        output[i]=input[i]/2;
        sum+=output[i];
    }
    for(int i=0;i<n;i++){
        if(abs(input[i])%2==1 && sum >0) {
            int f = floor(input[i]/2.0);
            int c = ceil(input[i]/2.0);
            if(min(f,c)<output[i]) {cout<<min(f,c)<<endl;sum--;}
            else cout<<output[i]<<endl;
        }
        else if(abs(input[i])%2==1 && sum <0) {
            int f = floor(input[i]/2.0);
            int c = ceil(input[i]/2.0);
            if(max(f,c)>output[i]) {cout<<max(f,c)<<endl;sum++;}
            else cout<<output[i]<<endl;
        }
        else cout<<output[i]<<endl;
    }
    return 0;
}