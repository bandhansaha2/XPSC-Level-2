#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.rbegin(),x.rend()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, ans=0; cin >> n;
        vector <int> v(n);
        map <int,int> mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<pair<int,int>> p;
        for(auto[x,y] : mp) {
            p.push_back({y,x});
        }

        sort(all(p));
        // for(auto[x,y] : p) {
        //     cout << x << " " << y << endl;
        // }
        if(p[0].first < 3) cout << -1 << endl;
        else cout << p[0].second << endl;
    }

    return 0;
}