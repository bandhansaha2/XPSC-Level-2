#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "Yes" << '\n'
#define No cout << "No" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c;
    cin >> a >> b >> c;

    if(a+b > c && a+c>b && b+c>a) Yes;
    else No;

    return 0;
}