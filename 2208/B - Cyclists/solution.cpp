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
        ll n,k,p,m;
        cin>>n>>k>>p>>m;
        vll a(n);
        loop cin>>a[i];
        int wc=p-1;
        ll cc=a[wc];
        vll b;
        for(int i=0;i<wc;i++) b.pb(a[i]);
        vll c;
        loop if(i != wc) c.pb(a[i]);
        sort(all(b));
        sort(all(c));
        ll x = 0;
        ll bf = max(0LL,p-k);
        for(int i=0;i<bf;i++){
            x += b[i];
        }
        x+=cc;
        if(x>m){
            cout<<0<<"
";
            return;
        }
        ll need=max(0LL,n-k);
        ll cost = 0;
        for(int i=0;i<need && i<c.size();i++){
            cost += c[i];
        }
        cost+=cc;
        ll rem=m-x;
        ll ans=0;
        if(cost>0){
            ans=rem/cost;
        }
        else{
            ans=rem;
        }
        cout<<ans+1<<"
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}