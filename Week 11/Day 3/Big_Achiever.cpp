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
        int n;
        cin >> n;
        
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        int mx = v[0];
        cout << 1 << " ";
        for(int i=1; i<n; i++) {
            if(v[i] > mx) cout << 1 << " ";
            else cout << 0 << " ";
            mx = max(mx,v[i]);
        }
        cout << endl;
    }

    return 0;
}