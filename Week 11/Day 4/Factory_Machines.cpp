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
    
    int n, t;
    cin >> n >> t;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    auto ok = [&](ll seconds) {
        ll count = 0;
        for(int i=0; i<n; i++) {
            count += (seconds/v[i]);
            if(count >= t) return true;
        }
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;
    while(l <= r) {
        mid = l + (r - l) / 2;
        if(ok(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}