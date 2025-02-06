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
    
    int n; cin >> n;
    map<int,int>d;
    for(int i=0; i<n; i++) {
        int x,y;
        cin >> x >> y;
        d[x]++;
        d[y+1]--;
    }

    ll ans = 0,sum = 0;
    for(auto[p,q]:d) {
        sum+=q;
        ans = max(ans,sum);
    }
    
    cout << ans << endl;

    return 0;
}