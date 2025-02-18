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
        vector <int> v(n-2);
        map<int,int> mp;
        for(int i=0; i<n-2; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        if(mp.size() == 1) Yes;
        else {
            int m = n - 4;
            bool flag = true;
            for(int i=0; i<m; i++) {   
                if(v[i] == 1 && v[i+1] == 0 && v[i+2] == 1) {
                    flag = false;
                    break;
                }
            }
            if(flag) Yes;
            else No;
        }
    }

    return 0;
}