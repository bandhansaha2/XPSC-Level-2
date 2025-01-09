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
    
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(all(v));
    
    auto ok = [&](int median) {
        ll count = 0;
        for(int i=(n/2); i<n; i++) {
            count += (v[i] < median ? (median - v[i]) : 0);
        }
        return count <= k;
    };

    int l = 1, r = 2e9, mid, ans;
    while(l<=r) {
        mid = l + (r - l) / 2;
        if(ok(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}