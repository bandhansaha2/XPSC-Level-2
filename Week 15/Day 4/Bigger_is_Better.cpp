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
        int n;
        cin >> n;

        string a , b; cin >> b;

        for(int i=0; i<n; i++) {
            a += "z";
        }
        //cout << a << endl;
        if(a > b) cout << a << endl;
        else cout << -1 << endl;
    }

    return 0;
}