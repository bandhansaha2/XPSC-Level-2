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
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        sort(all(v));
        string res = "Yes";
 
        for(int i = 0; i < n; i += 2) {
            if(v[i] != v[i + 1]) {
                res = "No";
                break;
            }
            for(int j = i + 2; j < n; j++) {
                if(v[j] == v[i]) {
                    v[j]++;
                }
                else {
                    break;
                }
            }
 
        }
 
        cout << res << endl;
    }

    return 0;
}