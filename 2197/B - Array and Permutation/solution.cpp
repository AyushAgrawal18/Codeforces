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
        ll n;
        cin >> n;
 
        vll p(n), a(n);
        loop cin >> p[i];
        loop cin >> a[i];
        vll pos(n+1);
        loop pos[p[i]] = i;
        vll b;
        b.push_back(a[0]);
        rep(i, 1, n){
            if(a[i]!=a[i-1]) b.push_back(a[i]);
        }
        int m = (int)b.size()-1;
        bool ok = true;
        rep(i,0,m){
            if(pos[b[i]]>=pos[b[i+1]]){
                ok = false;
                break;
            }
        }
        if(ok) yes();
        else no();
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}