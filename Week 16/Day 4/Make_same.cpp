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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        map <char,ll> mp1,mp2,mp3;
        for(int i=0; i<n; i++) {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
            mp3[s3[i]]++;
        }

        ll sumz = mp1['0'] + mp2['0'] + mp3['0'];

        if(sumz % n != 0) cout << -1 << endl;
        else {
            ll ans1 = min(min(mp2['0'],mp2['1']),min(mp3['0'],mp3['1']));
            ll tmp = max(min(mp2['0'],mp2['1']),min(mp3['0'],mp3['1']));
            ll ans2 = min(tmp,min(mp1['0'],mp1['1']));
            cout << ans1 + ans2 << endl;
        }

    }

    return 0;
}