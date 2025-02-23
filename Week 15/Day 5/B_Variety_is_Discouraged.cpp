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
        map <int,int> mp;
        vector <int> v(n);

        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
 
        int l=0, r=0, count=0, res=0;
        for(int i=0; i<n; i++) {
            if(mp[v[i]] == 1) count++;
            else count = 0;

            if(count > res) {
                res = count;
                r = i+1;
                l = r-count+1;
            }
        }
        if(res == 0) cout << res << endl;
        else cout << l << " " << r << endl;
    }
 
    return 0;
}