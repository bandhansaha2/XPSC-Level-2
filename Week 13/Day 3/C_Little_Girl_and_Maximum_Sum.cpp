#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.rbegin(),x.rend()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    vector<int> d(n + 1);
    for (int i = 0;i < q;i++) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }

    for (int i = 1;i <= n;i++) {
        d[i] = d[i - 1] + d[i];
    }

    sort(all(a));
    sort(all(d));

    long long ans = 0;

    for (int i = 0;i < n;i++) {
        ans += (1LL * a[i] * d[i]);
    }

    cout << ans << endl;

    return 0;
}