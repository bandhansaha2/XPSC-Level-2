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

        vector <ll> v(n);

        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        sort(all(v));

        if(n == 1) {
            cout << v.front() << endl;
            continue;
        }
        for(int i=n-1; i>0; i--) {
            ll sum = (v[i] + v[i-1]) - 1;
            v[i-1] = sum;
            v.pop_back();
        }

        cout << v.front() << endl;
    }

    return 0;
}