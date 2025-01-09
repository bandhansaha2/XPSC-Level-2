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
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        int ordered = 0;
        for(int i=0; i<n; i++) {
            if(v[i] == ordered+1) ordered++;
        }
        cout << ceil((float(n)-ordered)/k) << endl;
    }

    return 0;
}