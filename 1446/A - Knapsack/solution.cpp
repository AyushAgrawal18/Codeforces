#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
 
void solve() {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll,ll>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
 
    ll need = (w + 1) / 2;
 
    for(auto &x : a) {
        if(x.first >= need && x.first <= w) {
            cout << 1 << "
" << x.second << "
";
            return;
        }
    }
 
    sort(all(a));
 
    ll sum = 0;
    vector<ll> ans;
 
    for(auto &x : a) {
        if(sum + x.first > w) break;
        sum += x.first;
        ans.pb(x.second);
        if(sum >= need) break;
    }
 
    if(sum >= need && sum <= w) {
        cout << ans.size() << "
";
        for(auto x : ans) cout << x << " ";
        cout << "
";
    } else {
        cout << -1 << "
";
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while(t--) solve();
}