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
        int n,q;
        cin >> n >> q;
        vector <ll> c(n);
        for(int i=0; i<n; i++) {
            cin >> c[i];
        }

        for(int i=0; i<q; i++) {
            int k; cin >> k;
            vector <ll> v;
            v.assign(all(c));

            if(k < v.back()) {
                cout << 0 << " ";
            }
            else {
                int count = 0;
                ll kk = k^v.back();
                v.pop_back();
                count++;
                k = kk;
                
                while(k >= v.back()) {
                    if(count == n) break;
                    ll neww = k^v.back();
                    v.pop_back();
                    k = neww;
                    count++;
                }
                cout << count << " ";
            }
        }
        cout << endl;
    }

    return 0;
}