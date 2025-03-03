#include <bits/stdc++.h>
#define ll long long
#define endl '\n';
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define iton ll i=0; i<n; i++
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<int>v(n);
        map<int,int>mp;

        bool divisible = false;
        for(iton) {
            cin >> v[i];
            if(v[i] % k == 0) divisible = true; 
            mp[v[i]]++;
        }

        if(divisible) {
            cout << 0 << endl;
            continue;
        }

        for(auto [x,y] : mp) {
            cout << x << " ";
        }
        cout << endl;
        for(auto [x,y] : mp) {
            cout << x % k << " ";
        }
        
        
        // for(iton) cout << v[i] << " ";
        cout << endl;
        cout << endl;
    }

    return 0;
}