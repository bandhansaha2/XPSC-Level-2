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
        int n,x,k;
        cin >> n >> x >> k;
        string s; cin >> s;

        ll one = 0, inversion = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') one++;
            else inversion += one;
        }

        if(inversion <= x && inversion%k == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }

    return 0;
}