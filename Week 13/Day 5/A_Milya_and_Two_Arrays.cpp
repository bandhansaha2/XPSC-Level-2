#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define alll(x) x.rbegin(),x.rend()
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
        vector<int>a(n),b(n);
        map<int,int>mp1,mp2;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            mp1[a[i]]++;
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
            mp2[b[i]]++;
        }

        int m1 = mp1.size(), m2 = mp2.size();
        if(mp1.size() > 2 && mp2.size() >= 1) Yes;
        else if(mp1.size() >= 1 && mp2.size() > 2) Yes;
        else if(mp1.size() == 2 && mp2.size() == 2 && n>=4) Yes;
        else if(max(m1,m2) == 2 && min(m1,m2) == 1) No;
        else No;
    }

    return 0;
}