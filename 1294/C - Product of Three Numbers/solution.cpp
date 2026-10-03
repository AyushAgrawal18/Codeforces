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
    ll x;
    cin >> x;
    ll n = x;
    ll a = -1, b = -1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            n /= i;
            break;
        }
    }
    if (a == -1) {
        no();
        return;
    }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0 && i != a) {
            b = i;
            n /= i;
            break;
        }
    }
    if (b == -1) {
        no();
        return;
    }
    ll c = n;
    if (a == b || a == c || b == c || c == 1) {
        no();
        return;
    }
    yes();
    cout << a << " " << b << " " << c << '
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}