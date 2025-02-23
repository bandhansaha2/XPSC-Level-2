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
        int n,x; cin >> n >> x;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        for(int i=0; i<n; i++) {
            int count = 1, prev = v[i];
            v[i] *= x;
            for(int j=1; j<n; j++) {
                if(v[j-1] <= v[j]) {
                    count++;
                }
                else {
                    ans = max(ans,count);
                    count = 1;
                }
            }
            ans = max(ans,count);
            v[i] = prev;
        }
        cout << ans << endl;
    }

    return 0;
}