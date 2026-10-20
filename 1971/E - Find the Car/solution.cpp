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
    ll n,k,q;
    cin>>n>>k>>q;
    vll a(k+1),b(k+1);
    a[0] = 0;
    b[0] = 0;
    rep(i,0,k) cin >> a[i+1];
    rep(i,0,k) cin >> b[i+1];
    while(q--){
        ll d;
        cin >> d;
        ll idx = lower_bound(a.begin(), a.end(),d)-a.begin();
        if(a[idx]==d){
            cout << b[idx] << " ";
        }
        else{
            ll x1=a[idx-1],x2=a[idx];
            ll y1=b[idx-1],y2=b[idx];
            ll ans=y1+(d-x1)*(y2-y1)/(x2-x1);
            cout<<ans<<" ";
        }
    }
    cout << '
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}