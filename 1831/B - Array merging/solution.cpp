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
     ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];
 
        map<ll, ll> maxA, maxB;
 
        for (ll i = 0; i < n; ) {
            ll j = i;
            while (j < n && a[j] == a[i]) j++;
            maxA[a[i]] = max(maxA[a[i]], j - i);
            i = j;
        }
 
        for (ll i = 0; i < n; ) {
            ll j = i;
            while (j < n && b[j] == b[i]) j++;
            maxB[b[i]] = max(maxB[b[i]], j - i);
            i = j;
        }
 
        ll ans = 0;
        for (auto &p : maxA) {
            ll val = p.first;
            ans = max(ans, maxA[val] + maxB[val]);
        }
        for (auto &p : maxB) {
            ll val = p.first;
            ans = max(ans, maxA[val] + maxB[val]);
        }
 
        cout << ans << "
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}