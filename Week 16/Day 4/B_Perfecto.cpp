#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

bool square(ll n) {
    ll root = sqrt(n);
    return root * root == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector <ll> ans(n),bad;
        for(ll i=1; i<=n; i++) {
            ll pre = i*(i+1) / 2;
            if(square(pre)) bad.push_back(i);
        }
        if(bad.back() == n) {
            cout << -1 << endl;
            continue;
        }

        for(ll i=0; i<n; i++) {
            ans[i] = i+1;
        }

        

        for(auto idx:bad) {
            swap(ans[idx-1],ans[idx]);
        }

        for(auto it:ans) cout << it << " ";
        cout << endl;

    }

    return 0;
}