#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
 
const int LOG = 20;
 
 
ll get_and(int l, int r, const vector<vector<ll>>& st) {
       ll dis= r-l+1;
       int k=floor(log2(dis));
       return st[k][l] & st[k][r-(1<<k)+1];
    }
 
inline void solve() {
    int n;
    cin >> n;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<vector<ll>> st(LOG, vector<ll>(n));
    for (int i = 0; i < n; i++) st[0][i] = a[i];
 
    for (int j = 1; j < LOG; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            st[j][i] = st[j - 1][i] & st[j - 1][i + (1 << (j - 1))];
        }
    }
 
 
    int q;
    cin >> q;
 
    while (q--) {
        int l;
        ll k;
        cin >> l >> k;
        l--;
 
        int low = l, high = n - 1, ans = -1;
 
        while (low <= high) {
            int mid = (low + high) / 2;
 
            if (get_and(l, mid, st) >= k) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
 
        if (ans == -1) cout << -1 << " ";
        else cout << ans + 1 << " ";
    }
 
    cout << '
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
}