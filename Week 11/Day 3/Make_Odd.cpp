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
        string a,b;
        cin >> a >> b;
        int one = 0, zero = 0;
        for(int i=0; i<n; i++) {
            if((a[i] == '1' && b[i] == '1')) one++;
            else if((a[i] == '0' && b[i] == '0')) zero++;
        }
        int left = (n - zero) - one;
        if(one%2 != 0) Yes;
        else {
            if(left > 0) Yes;
            else No;
        }
    }

    return 0;
}