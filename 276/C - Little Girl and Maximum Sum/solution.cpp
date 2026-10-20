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
    ll n,q;
    cin>> n >> q;
    vll a(n);
    loop cin >> a[i];
    vll temp(n);
    vpii query(q);
    vpii pos;
    for(int i = 0; i < q; i++){
        cin >> query[i].first >> query[i].second;
        temp[query[i].first-1]++;
        if (query[i].second < n)
            temp[query[i].second]--;
    }
    for(int i = 1; i < n; i++)
        temp[i] += temp[i-1];
    for(int i = 0; i < n; i++)
        pos.pb({temp[i], i});
    sort(rall(pos));
    sort(rall(a));
    vll ans(n);
    for(int i = 0; i < n; i++) 
        ans[pos[i].second] = a[i];
    vll pref(n+1,0);
    for(int i = 0; i < n; i++)
        pref[i+1] = pref[i] + ans[i];
    ll res = 0;
    for(int i = 0; i < q; i++){
        res += pref[query[i].second] - pref[query[i].first-1];
    }
    cout << res << "
";
}
 
int main() {
    fastio();
    solve();
    return 0;
}