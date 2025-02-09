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
        string s; cin >> s;
        int n = s.size();
        bool flag = false;
        for(int i=n-1; i>0; i--) {
            if(s[i] == s[i-1]) {
                flag = true;
                break;
            }
        }
        if(flag) cout << 1 << endl;
        else cout << n << endl;
    }

    return 0;
}