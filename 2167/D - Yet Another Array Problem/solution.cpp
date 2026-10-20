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
 
vector<int> Prime(int q) {
    vector<bool> prime(q + 1, true);
    vector<int> b;
    prime[0] = prime[1] = false;
    
    for (int i = 2; i <= q; i++) {
        if (prime[i]) {
            b.pb(i);
            for (ll j = (ll)i * i; j <= q; j += i) {
                prime[j] = false;
            }
        }
    }
    return b;
}
vector<int> b = Prime(1000000);
 
inline void solve() {
    // Your solution goes here
    ll n;
    cin >> n;
    vll a(n);
    loop cin >> a[i];
    sort(all(a));
    for (int x : b) {
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (__gcd((ll)x, a[i]) == 1) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            cout << x << "
";
            return;
        }
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}