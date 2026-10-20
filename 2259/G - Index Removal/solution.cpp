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
    ll n, k;
    cin>>n>>k;
    vll a(n);
    loop cin>>a[i];
    
    vll pref(n+1,0);
    pref[0] = 0;
    for(int i=0;i<n;i++){
        pref[i + 1] = pref[i] + a[i];
    }
    vll c(n);
    for(int i=0;i<n;i++){
        c[i] = a[i] -(i + 1)*k;
    }
    
    vll ans(n);
    for(int i=0;i<n;i++){
        if(i == 0 || i == n - 1){
            ans[i] = 0;
            continue;
        }
        if(a[i + 1] - a[i - 1] <= k){
            ans[i] = 0;
            continue;
        }
        ll target = a[i - 1]- (i + 1)*k;
        auto it = lower_bound(c.begin()+i+1, c.end(), target, greater<ll>());
        ll j = it - c.begin();
        ll len = (j-1) - (i+1) + 1;
        if(len <= 0){
            ans[i] = 0;
            continue;
        }
        ll sum = pref[j] -pref[i+1];
        ll t_sum = len* a[i - 1] + (k*(len*(len + 1)/2));
 
        ans[i] = sum-t_sum;
    }
    
    loop cout<<ans[i]<<" ";
    cout<<endl;
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}