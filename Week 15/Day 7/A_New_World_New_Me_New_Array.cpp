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
        int n,k,p;
        cin >> n >> k >> p;

        k = abs(k);
        //if(k % 2 != 0) k++;
        int val = ceil(float(k) / p);
        if(n >= val) cout << val << endl;
        else cout << -1 << endl;
    }

    return 0;
}