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
        vector <int> v(n), a;
        for(int i=0; i<n; i++) {
            cin >> v[i];
        } 
        if(is_sorted(all(v))) Yes;
        else {
            int last = 0;
            for(int i=0; i<n; i++) {
                int l = v[i] / 10, r = v[i] % 10;
                if(l >= last && r >= l) {
                    last = r;
                    a.push_back(l);
                    a.push_back(r);
                }
                else {
                    last = v[i];
                    a.push_back(v[i]);
                }
            }
            if(is_sorted(all(a))) Yes;
            else No;
        }
    }

    return 0;
}