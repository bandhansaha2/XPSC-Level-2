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
        for(int i=0; i<n; i++) {
            if(s[i] == '0') s[i] = '1';
            else s[i] = '0';
        }
        cout << s << endl;
    }

    return 0;
}