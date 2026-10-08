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
 
 
bool check (ll x, ll k, vll &s, vll &w){
    ll total = 0;
    int n=s.size();
    for (int i=0;i<n;i++) {
        if (s[i] >= x) continue;
        if (w[i] == -1) return false;
        ll need = 2 * w[i] + (x - s[i]);
        if (need>k-total) return false;
        total += need;
    }
    return true;
}
 
 
 
inline void solve() {
    // Your solution goes here
    ll n,k;
    cin>>n>>k;
    vll s(n), w(n);
    ll ans=1e18;
    loop{
        ll a,b,c;
        cin>>a>>b>>c;
        s[i]=a+b+c;
        if(a<=b&&b<=c){
          if(a==b&&b==c){ 
            w[i]=-1;
            ans=min(ans,s[i]);
          }
          else w[i]=min(b-a+1,c-b+1);
        }
        else w[i]=0;
    }
    ll l=*min_element(all(s));
    ll h=l+k;
    if(ans!=1e18) h=min(h,ans);
    while (l<h){
        ll mid=l+(h-l+1)/2;
        if (check(mid,k,s,w))l=mid;
        else h=mid-1;
    }
    cout<<l<<endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}