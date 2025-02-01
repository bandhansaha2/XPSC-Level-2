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
        int n,k;
        cin >> n >> k;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        vector<int>l(n),r(n);

        int h = 1e9;
        for(int i=0; i<n; i++) {
            if(v[i] == 0) {
                l[i] = 0;
                h = 0;
            }
            else if(v[i] < h) {
                l[i] = h;
            }
            else {
                h = v[i];
                l[i] = h;
            }
        }
        for(int i=n-1; i>=0; i--) {
            if(v[i] == 0) {
                r[i] = 0;
                h = 0;
            }
            else if(v[i] < h) {
                r[i] = h;
            }
            else {
                h = v[i];
                r[i] = h;
            }
        }

        for(int i=0; i<n; i++) {
            int num = min(l[i],r[i]);
            cout << (num + k - 1)/k << " ";
        }
        cout << endl;
    }

    return 0;
}