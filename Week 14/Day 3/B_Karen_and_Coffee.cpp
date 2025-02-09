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
    
    int n,k,q;
    cin >> n >> k >> q;
    map<int,int>d;
    int mn = 1e8, mx = -1;
    
    for(int i=0; i<n; i++) {
        int l,r;
        cin >> l >> r;
        mn = min(mn,l);
        mx = max(mx,r);
        d[l]++;
        d[r+1]--;
    }

    for(int i=mn; i<=mx; i++) {
        d[i] += d[i-1];
    }

    vector<int>v(200002,0);

    for(auto [x,y]:d) {
        v[x] = y;
    }

    for(int i=1; i<200002; i++) {
        if(v[i] >= k) v[i] = v[i-1] + 1;
        else v[i] = v[i-1];
    }

    while(q--) {
        int ab, bc;
        cin >> ab >> bc;
        cout << v[bc] - v[ab-1] << endl;
    }

    return 0;
}