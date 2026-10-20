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
 
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define yes() cout << "YES
"
#define no() cout << "NO
"
 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
inline void solve() {
    int n;
    cin >> n;
    vi p(n + 2);
    for (int i = 1; i <= n; i++) cin >> p[i];
 
    vector<pii> suf(n + 3);
    suf[n] = {p[n], n};
    for (int i = n - 1; i >= 1; i--) {
        if (p[i] > suf[i + 1].first) suf[i] = {p[i], i};
        else suf[i] = suf[i + 1];
    }
 
    vi pref;
    int mini = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (p[i] < mini) {
            mini = p[i];
            pref.pb(i);
        }
    }
 
    for (int i = 0; i <pref.size() - 1; i++) {
        int cur = pref[i], nxt = pref[i + 1];
        if (p[cur] > suf[nxt].first) {
            no();
            return;
        }
    }
 
    yes();
 
    int cur = pref[0], nxt = 1;
    for (int i = 2; i <= n; i++) {
        if (nxt < sz(pref) && i == pref[nxt]) {
            cur = pref[nxt];
            nxt++;
        } else {
            cout << p[i] << " " << p[cur] << "
";
        }
    }
    for (int i = 0; i < pref.size() - 1; i++) {
        int u = p[pref[i]], v = suf[pref[i + 1]].first;
        cout << v << " " << u << "
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