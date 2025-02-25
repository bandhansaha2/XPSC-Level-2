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
        map<char,int>mp;
        int up = 0, down  = 0;
        for(auto it : s) {
            if(it == '-') up++;
            else down++;
        }
        if (n<3 || up < 2 || down == 0) cout << 0 << endl;
        else {
            int one = up / 2, two = up - one;
            cout << one * two * down << endl;
        }
    }

    return 0;
}