//https://codeforces.com/contest/227/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    long long vasya = 0, petya = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        int a;
        cin>>a;
        arr[a-1]=i+1; //a-1,i+1 if for index balance
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        vasya += arr[a-1];
        petya += n-arr[a-1]+ 1;
    }
    cout << vasya << " " << petya;
}





//the solution below results in TLE
/*
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    long long vasya = 0, petya = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        long long dist = distance(arr, find(arr, arr + n, a)) + 1;
        vasya += dist;
        petya += abs(n - dist) + 1;
    }
    cout << vasya << " " << petya;
}
*/