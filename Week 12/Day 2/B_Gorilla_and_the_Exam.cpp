#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.rbegin(),x.rend()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector <pair<int,int>> a;
        for(auto [key,value] : mp) {
            a.push_back({value, key});
        }
        sort(all(a));
        // for(auto [key,value] : a) {
        //     cout << key << " " << value << endl;
        // }
        while(true) {
            if(a.back().first <= k && a.size() > 1) {
                k -= a.back().first;
                a.pop_back();
            }
            else break;
        }
        cout << a.size() << endl;
    }

    return 0;
}