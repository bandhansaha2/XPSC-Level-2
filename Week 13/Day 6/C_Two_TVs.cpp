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
    map<int,int>mp;
    for(int i=0; i<n; i++) {
        int l,r; 
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum = 0;
    bool flag = true;
    for(auto [x,y]:mp) {
        sum+=y;
        if(sum > 2) {
            flag = false;
            break;
        }
    }
    if(flag)Yes;
    else No;

    return 0;
}