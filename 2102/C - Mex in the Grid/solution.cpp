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
    vector<vector<ll>> a(n, vector<ll>(n));
    ll l = 0, r = n - 1, t = 0, b = n - 1;
    ll num = (n * n) - 1;
    while (l <= r && t <= b) {
        for (ll i = l; i <= r; i++) a[t][i] = num--;
        t++;
        for (ll i = t; i <= b; i++) a[i][r] = num--;
        r--;
        if (t <= b) {
            for (ll i = r; i >= l; i--) a[b][i] = num--;
            b--;
        }
        if (l <= r) {
            for (ll i = b; i >= t; i--) a[i][l] = num--;
            l++;
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "
";
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}