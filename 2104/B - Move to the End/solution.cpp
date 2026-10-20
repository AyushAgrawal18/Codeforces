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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) b[i] = a[i];
        else b[i] = max(b[i-1], a[i]);
    }
    c[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
        c[i] = a[i] + c[i+1];
    }
    for (int k = 1; k <= n; k++) {
        int idx = n - k;
        ll x    = c[idx];
        ll y = b[idx] + c[idx+1];
        cout << max(x, y);
        if (k < n) cout << ' ';
        else cout << '
';
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}