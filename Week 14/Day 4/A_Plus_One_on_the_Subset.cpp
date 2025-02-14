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
        int mx = -1, mn = 2e9;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mx = max(v[i],mx);
            mn = min(v[i],mn);
        }
        cout << mx - mn << endl;
        // ll sum = 0;
        // for(int i=0; i<n; i++) {
        //     sum += mx - v[i];
        // }
        // cout << sum << endl;
    }
    

    return 0;
}