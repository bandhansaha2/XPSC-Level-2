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
        int a,b,c;
        cin >> a >> b >> c;

        if((a+b+c) % 2 != 0) cout << -1 << endl;
        else cout << min(a+b,(a+b+c)/2) << endl;
    }

    return 0;
}