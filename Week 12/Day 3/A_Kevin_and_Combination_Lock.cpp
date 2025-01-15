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
        int x;
        cin >> x;
        bool flag = false;
        if(x % 33 == 0) flag = true;
        else {
            while(true) {
                if(x == 33) {
                    flag = true;
                    break;
                }
                if(x > 33) {
                    string s = to_string(x);
                    int pos = s.find("33");
                    if(pos != -1) {
                        s.erase(pos,2);
                        x = std::stoi(s);
                    }
                    else x -= 33;
                }
                if(x < 33) break; 
            }
        }
        
        if(flag) Yes;
        else No;
    }

    return 0;
}