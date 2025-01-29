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
        string m; cin >> m;
        
        int s = 0;
        for(auto it: m) if(it == 'S') s++;

        if(s >= k) cout << n << endl;
        else cout << n+(k-(s+1)) << endl;
        //cout << s << endl;
    }

    return 0;
}