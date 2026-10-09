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
    ll n,m;
    cin>>n>>m;
    vll a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    sort(all(a));
    vll gap;
    for(int i=0;i<m-1;i++){
        gap.pb(a[i+1]-a[i]-1);
    }
    gap.pb(a[0]+n-a[m-1]-1);
    sort(rall(gap));
    ll save=0;
    ll days=0;
    for(int i=0;i<gap.size();i++){
        ll rem=gap[i]-2*days;
        if(rem<=0) continue;
        if(rem==1){
            save++;
            days++;
        }
        else{
            save+=rem-1;
            days+=2;
        }
    }
    ll ans=n-save;
    cout<<ans<<endl;
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}