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
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]] = i;
        }
        int ans = 0;
        for(int i=0; i<n; i++) {
            int last = mp[v[i]];
            set<int>s;
            while(i<n && i<last) {
                last = max(last,mp[v[i]]);
                s.insert(v[i]);
                i++;
            }
            ans += s.size();
        }
        cout << ans << endl;
    }

    return 0;
}