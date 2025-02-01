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
        string a = "RGB";
        string b = "RBG";
        string c = "GBR";
        string d = "GRB";
        string e = "BGR";
        string f = "BRG";

        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        int c4 = 0;
        int c5 = 0;
        int c6 = 0;

        int j = 0;
        for(int i=0; i<n; i++) {
            if(a[j] != s[i]) c1++;
            if(b[j] != s[i]) c2++;
            if(c[j] != s[i]) c3++;
            if(d[j] != s[i]) c4++;
            if(e[j] != s[i]) c5++;
            if(f[j] != s[i]) c6++;
            j++;
            if(j==3) j = 0;
        }

        cout << min({c1,c2,c3,c4,c5,c6}) << endl;
    }

    return 0;
}