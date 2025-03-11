#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "Yes" << '\n'
#define No cout << "No" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int u,r,l,d;
        cin >> u >> r >> l >> d;
        if(u==r && l==d && u==abs(l)) Yes;
        else No;
    }

    return 0;
}