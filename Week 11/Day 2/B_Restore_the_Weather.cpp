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
        int n,k;
        cin >> n >> k;
        vector<pair<int,int>> v(n);
        vector<int>b(n),c(n);
        for(int i=0; i<n; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        sort(all(v));
        sort(all(b));
        for(int i=0; i<n; i++) {
            c[v[i].second] = b[i];
        }
        for(auto x : c) cout << x << " ";
        cout << endl;
    }

    return 0;
}