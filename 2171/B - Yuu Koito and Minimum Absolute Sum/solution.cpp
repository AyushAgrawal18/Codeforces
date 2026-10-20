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
    int n;
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    ll ans;
    if (a[0]!=-1&&a[n-1]!=-1){
        ans=llabs(a[n-1] - a[0]);
    }
    else ans=0;
    if (a[0]==-1) {
        if (a[n-1]!=-1){
            a[0]=a[n-1];
        }
        else a[0]=0;
    }
    if (a[n-1]==-1) {
        if (a[0]!=-1){
            a[n-1]=a[0];
        }
        else a[n-1]=0;
    }
    for (int i=1;i<n-1;i++){
        if (a[i]==-1){
            a[i]=0;
        }
    }
    cout<<ans<<'
';
    loop{
        cout<<a[i]<<' ';
    }
    cout<<'
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}