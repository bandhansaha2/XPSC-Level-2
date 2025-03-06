#include <bits/stdc++.h>
#define ll long long
#define endl '\n';
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define iton ll i=0; i<n; i++
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<ll>v(n);

        for(iton) {
            cin >> v[i];
        }

        if(k==2 || k==3 || k==5) {
            ll ans = 1e9;
            for(auto x:v) {
                ans = min(ans,k*((x+k-1)/k)-x);
            }
            cout << ans << endl;
        }
        else {
            ll ans = 1e9;
            for(auto x:v) {
                ans = min(ans,k*((x+k-1)/k)-x);
            }
            vector<ll> d;
            for(auto it:v) {
                d.push_back(2*((it+1)/2)-it);
            }
            sort(all(d));
            cout << min(ans,d[0]+d[1]) << endl;
        }
    }

    return 0;
}