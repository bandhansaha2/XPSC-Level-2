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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        map <char,int> mp1,mp2,mp3;
        for(int i=0; i<n; i++) {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
            mp3[s3[i]]++;
        }

        int oone = mp1.size();
        int two = mp2.size();
        int three = mp3.size();
        ll sum = oone + two + three;

        if(sum == 3) cout << 0 << endl;
        else if(sum == 5) {
            int one = 0, zero = 0, onee = 0, zeroo = 0; 
            if(two == 1) {
                for(int i=0; i<n; i++) {
                    if(s1[i] == '0') zero++;
                    else one++;
                }
                for(int i=0; i<n; i++) {
                    if(s3[i] == '0') zeroo++;
                    else onee++;
                }
            }
            else if(oone == 1) {
                for(int i=0; i<n; i++) {
                    if(s2[i] == '0') zero++;
                    else one++;
                }
                for(int i=0; i<n; i++) {
                    if(s3[i] == '0') zeroo++;
                    else onee++;
                }
            }
            else {
                for(int i=0; i<n; i++) {
                    if(s1[i] == '0') zero++;
                    else one++;
                }
                for(int i=0; i<n; i++) {
                    if(s2[i] == '0') zeroo++;
                    else onee++;
                }
            }

            if(one == zeroo && zero == onee) cout << min(one,zero) << endl;
            else cout << -1 << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}