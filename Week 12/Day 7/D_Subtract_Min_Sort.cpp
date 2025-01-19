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
        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        if(is_sorted(all(v))) Yes;
        else {
            bool flag = false;
            for(int i=0; i<n-1; i++) {
                int val = min(v[i],v[i+1]);
                v[i] -= val;
                v[i+1] -= val;
                if(v[i] > v[i+1]) {
                    flag = true;
                    break;
                }
            }
            if(flag) No;
            else Yes;
        }
    }

    return 0;
}