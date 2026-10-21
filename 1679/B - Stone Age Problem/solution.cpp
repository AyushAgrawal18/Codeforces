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
    ll n, q;
    cin >> n >> q;
 
    vector<ll> a(n), res(n, 0);
    vector<bool> vis(n, false);
 
    ll sum = 0;
 
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    ll all = 0;
 
    while (q--) {
        ll type;
        cin >> type;
 
        if (type == 1) {
            ll p, x;
            cin >> p >> x;
            --p;
 
            if (vis[p]) {
                sum -= res[p];
            } else {
                sum -= (all == 0 ? a[p] : all);
            }
 
            res[p] = x;
            vis[p] = true;
            sum += x;
        } else {
            ll x;
            cin >> x;
 
            all = x;
            sum = n * x;
 
            fill(vis.begin(), vis.end(), false);
        }
 
        cout << sum << '
';
    }
}
 
int main() {
    fastio();
    // int t;
    // cin >> t;
    // while (t--) 
        solve();
    return 0;
}