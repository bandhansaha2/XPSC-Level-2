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
        int n; cin >> n;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        sort(all(v));
        
        auto ok = [&](int time) {
            int l = 0, count = 1;
            for(int r=0; r<n; r++) {
                if(v[r] - v[l] > 2*time) count++, l=r;
            }
            return count <= 3;
        };

        int l=0, r=1e9, mid, ans;
        while(l <= r) {
            mid = l + (r - l) / 2;
            if(ok(mid)) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }

    return 0;
}