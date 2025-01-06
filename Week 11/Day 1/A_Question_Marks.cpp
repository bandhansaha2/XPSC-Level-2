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
        int n; cin >> n;
        string s; cin >> s;
        map <char,int> mp;
        for(int i=0; i<4*n; i++) {
            if(s[i] != '?') mp[s[i]]++;
        }
        int count = 0;
        for(auto [x,y] : mp) {
            if(mp[x] >= n) count += n;
            else count += mp[x];
        }
        cout << count << endl;

    }

    return 0;
}