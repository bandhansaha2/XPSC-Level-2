#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "Yes" << '\n'
#define No cout << "No" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map <int,int> mp,indx;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]] = __builtin_popcount(v[i]);
            indx[v[i]] = i+1;
        }
        bool flag = true;
        for(int i=0; i<n; i++) {
            int c1 , c2;
            if(v[i] != i+1) {
                int tmp = v[i];
                c1 = mp[v[i]];
                c2 = mp[i+1];
                if(c1 != c2) {
                    flag = false;
                    break;
                }
                else {
                    v[i] = i+1;
                    v[indx[v[i]]-1] = tmp;
                }
            }
        }
        if(flag) Yes;
        else No;
    }

    return 0;
}