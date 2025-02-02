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
        int ar[n][n];
        vector <int> v;
        for(int i=0; i<n; i++) {
            int m = INT_MAX;
            for(int j=0; j<n; j++) {
                cin >> ar[i][j];
                m = min(m,ar[i][j]);
            }
            v.push_back(m);
        }
        sort(all(v));
        v[0] = 0;
        //for(auto it:v) cout << it << " ";

        bool flag = false;
        for(int i=0; i<n; i++) {
            if(v[i] != i) {
                cout << i << endl;
                flag = true;
                break;
            }
        }

        if(!flag) cout << n << endl;
        //cout << endl;
    }

    return 0;
}