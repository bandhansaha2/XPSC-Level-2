#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "Yes" << '\n'
#define No cout << "No" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int n = s.size();
    stack <char> st;
    int c = 0;
    st.push(s[0]);
    for(int i=1; i<n; i++) {
        
        if(!st.empty() && st.top() == s[i]) {
            st.pop();
            c++;
        }
        else st.push(s[i]);
        //cout << i << " - " << st.top() << endl;
        //cout << c << endl;
    }

    if(c==0 || c%2 == 0) No;
    else Yes;

    //cout << c << endl;

    return 0;
}