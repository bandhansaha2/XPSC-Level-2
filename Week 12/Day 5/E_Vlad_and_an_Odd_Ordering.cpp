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
        ll n , k;
        cin >> n >> k;
        
        ll taken = ((n+1) / 2), bit = 0, total_element = taken;

        while(k>taken) {
            k -= taken;
            taken = (n-total_element+1)/2;
            total_element += taken;
            bit++;
        }

        cout << (1LL<<bit)+(k-1)*(1LL<<(bit+1)) << endl;
    }

    return 0;
}