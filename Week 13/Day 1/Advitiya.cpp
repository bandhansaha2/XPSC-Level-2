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
        string s;
        cin >> s;

        string str = "ADVITIYA";
        int count = 0;

        for(int i=0; i<8; i++) {
            if(s[i] > str[i]) {
                int num = abs(str[i] - s[i]);
                if(num > 0) count += 26-num;
            }
            else count += str[i] - s[i];
            
        } 

        cout << count << endl;
    }

    return 0;
}