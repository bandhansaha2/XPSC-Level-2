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
        int n, one = 0;
        cin >> n;
        vector <int> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
            if(v[i] == 1) one++;
        }
        if(n==1) No;
        else {
            if(sum >= (2*one) && sum-(2*one) >= n-one) Yes;
            else No;
        }
    }

    return 0;
}