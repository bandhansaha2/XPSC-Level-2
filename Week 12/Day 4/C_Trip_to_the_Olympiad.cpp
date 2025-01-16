#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;
        ll msb = 62 - __builtin_clzll(l ^ r);
        ll a = (((l & r) >> msb) << msb) + (1LL << msb);
        ll b = a - 1;
        ll c;
        if(b > l) c = b - 1;
        else c = a + 1;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}