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
    int n, q;
    cin>>n>>q;
    vll a(n);
    loop cin>>a[i];
    ll maxi= *max_element(all(a));
    ll mini= *min_element(all(a));
    vll ans(33);
    ans[0]=maxi-mini;
    for(int k=1;k<32;k++){
    vll v;
        loop{
            for (int j=i+1;j<n;j++) {
                v.pb(a[i]^a[j]);
            }
        }
        sort(all(v));
        v.resize(n);
        ans[k]=v[n-1]-v[0];
        a=v;
    }
    while(q--){
        int x;
        cin>>x;
        if(x>32) cout<<0<<endl;
        else cout<<ans[x]<<endl;
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}