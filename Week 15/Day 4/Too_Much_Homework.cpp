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
    
    int x, y;
    cin >> x >> y;

    int k = 100 - x, p = y * 10;

    // cout << p << endl;

    if(x + p >= 100) Yes;
    else No;
    // if(k <= 0) Yes;
    // else cout << k/y << endl; 

    return 0;
}