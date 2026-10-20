#include <bits/stdc++.h>
using namespace std;
 
/* 
  ****************************************************
  *                                                  *
  *             COMPETITIVE PROGRAMMING              *
  *                                                  *
  *            Author: Ayush Kumar Agrawal           *
  *                  Code Smart, Win Big             *
  *                                                  *
  ****************************************************
*/
 
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define loop for(int i = 0; i < n; i++)
#define rloop for(int i = n-1; i >= 0; i--)
#define yes() cout << "YES
"
#define no() cout << "NO
"
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);
 
inline void solve() {
    // Your solution goes here
    int n; string s;
        cin >> n >> s;
        int sum_a = 0, sum_b = 0;
        loop if(s[i] == 'a') ++sum_a; else ++sum_b;
        if(sum_a == sum_b) {
            cout << 0 << '
';
            return;
        }
        int diff = sum_a - sum_b;
        map<int,int> mp;
        mp[0] = 0;
        int pref = 0;
        int ans = n;
        for(int i = 0; i < n; ++i) {
            pref += (s[i] == 'a') ? 1 : -1;
            int want = pref - diff;
            auto it = mp.find(want);
            if(it != mp.end()) {
                int len = (i+1) - it->second;
                ans = min(ans, len);
            }
            mp[pref] = i+1;
        }
        if(ans == n) cout << -1 << '
';
        else cout << ans << '
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}