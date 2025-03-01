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

        int ans = -1;
        for(int i=0; i<n; i++) {
            int value = v[i];
            
            if(i == 1) value -= v[0];
            if(i == n-2) value -= v[n-1];

            ans = max(ans,value);
        }

        cout << ans << endl;
              
    }

    return 0;
}