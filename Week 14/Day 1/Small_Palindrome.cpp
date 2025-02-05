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
        int one,zero;
        cin >> one >> zero;
        int put = one / 2, rem = one - put;
        for(int i=0; i<put; i++) cout << 1;
        for(int i=0; i<zero; i++) cout << 2;
        for(int i=0; i<rem; i++) cout << 1;
        cout << endl;
    }

    return 0;
}