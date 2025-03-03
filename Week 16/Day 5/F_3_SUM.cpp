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
        vector <int> v(n);

        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        vector<int> d,freq(11,0);
        for(int i=0; i<n; i++) {
            if(freq[v[i] % 10] == 0) d.push_back(v[i]%10) ;
            freq[v[i]%10]++;
        }

        bool flag = false;
        n = d.size();

        if(freq[1]>=3) flag = true;

        if(!flag) {
            for(int i=0; i<n; i++) {
                if(flag) break;
                if(freq[d[i]] >= 2) {
                    for(int j=0; j<n; j++) {
                        if(d[i] == d[j]) continue;
                        if(((2*d[i]) + d[j]) % 10 == 3) {
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }

        if(!flag) {
            for(int i=0; i<n; i++) {
                if(flag) break;
                for(int j=0; j<n; j++) {
                    if(flag) break;
                    for(int k=0; k<n; k++) {
                        if(i!=j && j!=k && i!=k && (d[i] + d[j] + d[k]) % 10 == 3) {
                            flag = true;
                            break;
                        }
                        
                    }
                }
            }
        }

        if(flag) Yes;
        else No;

    }

    return 0;
}