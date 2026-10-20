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
 
bool check(ll mid, ll S, vll a) {
    vector<ll> temp(a.size());
        for(int i = 0; i < a.size(); i++)
            temp[i] = a[i] + (i + 1) * mid;
 
        sort(all(temp));
 
        ll cost = 0;
        for(int i = 0; i < mid; i++)
            cost += temp[i];
 
        return cost <= S;
}
 
inline void solve() {
    // Your solution goes here
    ll n, S;
    cin>>n>>S;
    vll a(n);
    loop{
        cin>>a[i];
        // a[i].second = i+1;
    }
 
    // sort(all(a));
    ll l=0,r=n;
    ll ans = 0;
    while(l<=r){
        ll mid = l + (r-l)/2;
        if(check(mid, S, a)){
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
    }
    // ll sum = 0;
    // for(int i=0; i<ans; i++){
    //     sum += a[i] + (i+1)*ans;
    // }
    vll temp(a.size());
    for(int i = 0; i < a.size(); i++)
        temp[i] = a[i] + (i + 1) * ans;
    sort(all(temp));
    ll sum = 0;
    for(int i = 0; i < ans; i++)
        sum += temp[i];
    cout<<ans<<" "<<sum<<'
';
}
 
int main() {
    fastio();
    solve();
    return 0;
}