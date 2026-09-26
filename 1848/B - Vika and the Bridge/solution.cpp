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
    ll n,k;
    cin>>n>>k;
    vll last(k+1);
    vll mx1(k+1);
    vll mx2(k+1);
    for(int i=1;i<=n;i++){
        ll c;
        cin>>c;
        ll gap =i-last[c]-1;
        if (gap>mx1[c]){
            mx2[c]=mx1[c];
            mx1[c]=gap;
        } 
        else if(gap>mx2[c]){
            mx2[c]=gap;
        }
        last[c]=i;
    }
    for(int c=1;c<=k;c++){
        int gap=n-last[c];
        if(gap>mx1[c]){
            mx2[c]=mx1[c];
            mx1[c]=gap;
        } 
        else if(gap>mx2[c]){
            mx2[c]=gap;
        }
    }
    ll ans=n;
    for(int c=1;c<=k;c++){
        ans=min(ans,max(mx1[c]/2,mx2[c]));
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