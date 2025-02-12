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
        int n,ans = 0,num = 0;
        cin >> n;
        vector <int> v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] > 1) ans++,num = v[i];
        }

        if(ans == 0) cout << -1 << endl;
        else {
            cout << 1 << endl;
            cout << num << endl;
        }
    }

    return 0;
}