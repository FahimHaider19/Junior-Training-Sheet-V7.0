http://codeforces.com/contest/807/problem/A
#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string round="";
    bool decreasing = true;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i].first>>arr[i].second;
        if(arr[i].first!=arr[i].second) round = "rated";
        if(i>0 && arr[i]>arr[i-1]) decreasing=false;
    }
    if(round!="rated" && decreasing==true) {round="maybe";}
    else if(round!="rated" && decreasing==false)round="unrated";
    cout<<round;
    return 0;
}

