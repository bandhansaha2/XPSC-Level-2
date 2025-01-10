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
    
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
        v[i]--;
    }
    bool found = false;
    auto ok = [&](int num) {
        vector <bool> cut(n);
        for(int i=0; i<=num; i++) {
            cut[v[i]] = true;
        }
        int j=0;
        for(int i=0; i<n; i++) {
            if(!cut[i] && t[i] == p[j]) {
                j++;
            }
            if(j == m) {
                found = true;
                return true;
            }
        }
        return false;
    };

    int l=0, r=n-1, mid, ans;
    while(l<=r) {
        mid = l + (r - l) / 2;
        if(ok(mid)) {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout << (found ? ans+1 : ans) << endl;
    return 0;
}