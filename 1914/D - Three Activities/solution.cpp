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
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);
 
 
 
inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vpll a(n), b(n), c(n);
    loop{
        int x;
        cin>>x;
        a.push_back({x,i});
    }
    loop{
        int x;
        cin>>x;
        b.push_back({x,i});
    }
    loop{
        int x;
        cin>>x;
        c.push_back({x,i});
    }
    sort(rall(a));
    sort(rall(b));
    sort(rall(c));
    
    ll ans = 0;
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if (a[i].second!=b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }
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