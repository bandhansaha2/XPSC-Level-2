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
        ll n,x,sum=0;
        cin >> n >> x;
        vector <ll> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if(sum / n == x && sum % x == 0) Yes;
        else No;
    }

    return 0;
}