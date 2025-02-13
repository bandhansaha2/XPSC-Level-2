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
        int n , div = 0; cin >> n;
        if(n <= 1399) div = 4;
        else if(n <= 1599) div = 3;
        else if(n <= 1899) div = 2;
        else div = 1;

        
        cout << "Division " << div << endl;
    }

    return 0;
}