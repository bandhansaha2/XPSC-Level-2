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
        ll cur = 0, res = 20;

        for(int i=0; i<10; i++) {

            ll m = n, mv = 0;
            cur *= 10;
            cur += 9;

            for(int j=0; j<10; j++) {
                ll tmp = m, flag = 0;
                
                while(tmp) {
                    ll d = tmp % 10;
                    if(d == 7) {
                        flag = 1;
                        break;
                    }
                    tmp /= 10;
                }
                if(flag) res = min(res,mv);

                m += cur;
                mv++;
            }
            
        }
        cout << res << endl;
    }

    return 0;
}


