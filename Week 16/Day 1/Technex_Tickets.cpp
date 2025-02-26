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
        int one = 2, two = 5, count = 2;
        if(n == 1 || n == 3) cout << 1 << endl;
        else {
            while(1) {
                if(n == one || n == two) {
                    cout << count << endl;
                    break;
                }
                else {
                    one += 2, two += 2;
                    count++;
                }
            }
        }
    }

    return 0;
}