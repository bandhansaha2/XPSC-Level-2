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
        ll count = n / 15;
        ll ans = count*3;
        ll cnt = 0;
        for(ll i=count*15; i<=n; i++) {
            if(i%3 ==i%5) {
                cnt++;
            } 
        }
        cout << ans + cnt << endl;
    }

    return 0;
}