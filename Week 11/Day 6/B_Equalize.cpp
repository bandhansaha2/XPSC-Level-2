#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
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
        v.erase(unique(all(v)),v.end());
        int mx = 1, m = v.size();
        for(int i=0; i<m; i++) {
            int num = v[i] + n - 1;
            int it = upper_bound(all(v),num) - v.begin() - i;
            mx = max(mx,it);
        }
        cout << mx << endl;
    }

    return 0;
}