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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }
    ll cost_a = 0;
    if (a.size() > 1) {
        vector<ll> x;
        for (ll i = 0; i < a.size(); i++) {
            x.push_back(a[i] - i);
        }
        sort(all(x));
        ll mid_a = x[a.size() / 2];
        for (ll i = 0; i < x.size(); i++) {
            cost_a += abs(x[i] - mid_a);
        }
    }
    ll cost_b = 0;
    if (b.size() > 1) {
        vector<ll> y;
        for (ll i = 0; i < b.size(); i++) {
            y.push_back(b[i] - i);
        }
        sort(all(y));
        ll mid_b = y[b.size() / 2];
        for (ll i = 0; i < y.size(); i++) {
            cost_b += abs(y[i] - mid_b);
        }
    }
    cout << min(cost_a, cost_b) << "
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}