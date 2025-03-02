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
        ll n; cin >> n;
        vector <int> v(n),d(n);

        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        map <int,int> mp;
        for(int i=0; i<n; i++) {
            d[i] = v[i] % 10;
            mp[d[i]]++;
        }

        bool flag = false;
        n = mp.size();
        if(mp[1]>=3) flag = true;
        for(int i=0; i<n; i++) {
            if(mp[i]>=2) {
                for(int j=0; j<n; j++) {
                    if(mp[i] == mp[j]) continue;
                    if((2*(mp[i] + mp[j])) % 10 == 3) {
                        flag = true;
                        // break;
                    }
                }
            }
        }
        // if(!flag) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    for(int k=0; k<n; k++) {
                        if(i!=j && j!=k && k!=i && (mp[i] + mp[j] + mp[k]) % 10 == 3) {
                            flag = true;
                            // break;
                        }
                    }
                }
            }
        // }

        if(flag) Yes;
        else No;

        //cout << endl;
    }

    return 0;
}