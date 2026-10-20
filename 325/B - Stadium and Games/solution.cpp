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
    ll n; cin>>n;
    set<ll> s;
    for(int k=0; k<60; k++){
        ll pow2 = pow(2, k); // 1LL<<k;
        __int128 low = 1, high = 2e18;
        // if(k > 32) high = 2e18 / pow2;
        while(low <= high){
            ll mid = low + (high - low)/2;
            if(mid%2 == 0) mid++;
            // if(mid < 1) {
            //     low = 2;
            //     continue;
            // }
            // ll val = mid*mid + mid*(2*pow2 - 3);
            __int128 val = (__int128)mid * mid + (__int128)mid * (2*pow2 - 3);
            if(val == 2*n){
                s.insert(mid*pow2);
                break;
            }
            else if(val < 2*n) low = mid + 2;
            else high = mid - 2;
        }
    }
    if(s.empty()) cout<<-1<<'
';
    else for(ll x : s) cout<<x<<'
';
}
 
int main() {
    fastio();
    solve();
    return 0;
}