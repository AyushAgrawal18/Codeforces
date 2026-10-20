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
    cin>>n;
    ll size = 2*n;
    vll first(n+1, -1);
    vll dp(size+1, 0);
    for(int i=1;i<=size;i++){
        int x;
        cin>>x;
        dp[i]=dp[i-1]+1;
        
        if(first[x]==-1){
            first[x]=i;
        }
        else{
            int j = first[x];
            ll len= i-j+1;
            dp[i]=max(dp[i], dp[j-1]+len*len);
        }
    }
    cout<<dp[size]<<endl;
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}