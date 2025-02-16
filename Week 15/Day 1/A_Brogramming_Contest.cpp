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
        int n; string s;
        cin >> n >> s;

        int diff = 0;
        
        for(int i=0; i<n-1; i++) {
            if(s[i] != s[i+1]) diff++;
        }

        if(diff == 0 && s[0] == '0') cout << 0 << endl;
        else if(diff == 0) cout << 1 << endl;
        else if(diff > 0 && s.front() == '1') cout << diff+1 << endl;
        else cout << diff << endl;
    }

    return 0;
}