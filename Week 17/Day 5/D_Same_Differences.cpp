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
        ll n; cin >> n;
        map<ll,ll>mp;
        ll ans = 0;
        for(int i=0; i<n; i++) {
            ll x ; cin >> x;
            ans += mp[x-i];
            mp[x-i]++;
        }

        cout << ans << endl;
    }

    return 0;
}