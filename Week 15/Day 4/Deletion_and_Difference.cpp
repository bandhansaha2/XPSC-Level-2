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

        map<int,int> mp; int count = 0, m = n;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] > 1) {
                mp[v[i]] -= 2;
                m -= 2;
                count++;
            }
        }
        //cout << m ;
        if(m == 0) {
            cout << 1 << endl;
        }
        else if(mp.size() == n) cout << n << endl;
        else if(m == 1) {
            if(mp[0] == 1) {
                cout << 1 << endl;
            }
            else cout << m+1 << endl;
        }
        //else if(count > 0) cout << m+1 << endl;
        else {
            if(mp[0] == 1) {
                cout << m << endl;
            }
            else cout << m+1 << endl;
        }
    }

    return 0;
}