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
        ll A; cin >> A;
        ll a = A, B = -1;

        for(ll i=0; i<30; i++) {
            ll b = (1 << i) - 1;
            ll x = a ^ b;
            if(b < a && a+b > x && a+x > b && b+x > a) {
                B = b;
                break;
            }
        }
        cout << B << endl;
    }

    return 0;
}