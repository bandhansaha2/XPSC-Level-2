#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

const int N = 1e6+5;
vector <int> divisors(N);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i=1; i<N; i++) {
        for(int j = i; j<N; j+=i) {
            divisors[j]++;
        }
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << divisors[n] << endl;
    }

    return 0;
}