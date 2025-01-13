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
        vector <int> a(n), b(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        ll max_minus = -1, index = 0;
        bool flag = true;
        for(int i=0; i<n; i++) {
            cin >> b[i];
            if(b[i] - a[i] > max_minus) {
                max_minus = b[i] - a[i];
                index = i;
            }
        }
        for(int i=0; i<n; i++) {
            if(i != index) {
                a[i] -= max_minus;
                if(a[i] - b[i] < 0) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) Yes;
        else No;
    }

    return 0;
}