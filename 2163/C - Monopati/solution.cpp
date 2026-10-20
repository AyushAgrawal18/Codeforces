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
#define loop for(int i = 1; i <= n; i++)
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
    vll a(n+1), b(n+1);
    loop cin >> a[i];
    loop cin >> b[i];
    vll minpref(n+1), maxpref(n+1);
    minpref[1]=a[1];
    maxpref[1]=a[1];
    for (ll i=2;i<=n;i++)
    {
        minpref[i] = min(minpref[i-1], a[i]);
        maxpref[i] = max(maxpref[i-1], a[i]);
    }
    vll minsuff(n+2,LLONG_MAX), maxsuff(n+2, LLONG_MIN);
    for (ll i=n;i>=1;i--)
    {
        minsuff[i] = min(minsuff[i+1], b[i]);
        maxsuff[i] = max(maxsuff[i+1], b[i]);
    }
    ll x = 2*n;
    const ll INF = 1e9;
    vll d(x+2, INF);
    for (ll c = 1; c <= n; c++){
        ll mn = min(minpref[c], minsuff[c]);
        ll mx = max(maxpref[c], maxsuff[c]);
        if (mn >= 1 && mn <= x) d[mn] = min(d[mn], mx);
    }
    vll c(x+3, INF);
    for (ll l = x; l >= 1; l--)  c[l] = min(c[l + 1], d[l]);
    ll ans = 0;
    for (ll l = 1; l <= x; l++){
        if (c[l] < INF)  ans += (ll)(x - c[l] + 1);
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