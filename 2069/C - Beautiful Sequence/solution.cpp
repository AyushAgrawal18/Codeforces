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
 
const ll MOD = 998244353;
const ll INF = 1e18;
const double PI = acos(-1);
 
ll pwr(ll x, ll y, ll mod) {
    ll res=1;
    while (y>0) {
        if (y&1) res=(res*x)%mod;
        x=(x*x)%mod;
        y>>=1;
    }
    return res;
}
 
ll mod(ll x) {
    return pwr(x,MOD-2,MOD);
}
 
inline void solve() {
    // Your solution goes here
    ll n; 
    cin >> n; 
    ll mx=n+1; 
    vi a(n), p(mx, 0);
    loop cin >> a[i]; 
    loop p[i+1] = p[i] + (a[i] == 2); 
    vll P(mx+1);
    P[0]=1;
    for (int i=1;i<=mx;i++) 
        P[i]=(P[i-1]*2)%MOD; 
    ll sum=0,count=0,res=0; 
    loop { 
        if (a[i]==1) { 
            sum = (sum+mod(P[p[i+1]]))%MOD; 
            count++; 
        } else if (a[i]==3) { 
            ll cur=((P[p[i]]*sum)%MOD-count)%MOD; 
            if (cur<0)cur+=MOD; 
            res=(res+cur)%MOD; 
        } 
    } 
    cout<<res<<endl; 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}