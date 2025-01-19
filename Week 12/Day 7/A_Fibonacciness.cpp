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
        vector <int> v(5);
        for(int i=0; i<5; i++) {
            if(i == 2) {
                v[i] = v[i-1] + v[i-2];
            }
            else cin >> v[i];
        }
        int count1 = 0, count2 = 0, count3 = 0;
        for(int i=2; i<5; i++) {
            if(v[i] == v[i-1] + v[i-2]) count1++;
            //else break;
        }

        v[2] = v[3] - v[1];

        for(int i=2; i<5; i++) {
            if(v[i] == v[i-2] + v[i-1]) count2++;
        }

        v[2] = v[1] - v[3];
        for(int i=2; i<5; i++) {
            if(v[i] == v[i-2] + v[i-1]) count3++;
        }

        cout << max(count1,max(count2,count3)) << endl;
    }

    return 0;
}