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
 
 
bool check(ll k, ll x, ll n, vector<vll> &adj){
    vll a(n+1,0);
    int cnt=0;
    for(int v:adj[x]){
        if(a[v]) continue;
        cnt++;
        stack<int>st;
        st.push(v);
        a[v]=cnt;
        while(!st.empty()) {
            int u=st.top();
            st.pop();
            for(int w:adj[u]){
                if(w==x||a[w]) continue;
                a[w]=cnt;
                st.push(w);
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        ll j=k-i;
 
        if(j<1||j>n) continue;
        if(i==j||i==x||j==x) continue;
        if(a[i]!=a[j]) {
            return true;
        }
    }
    return false;
    
}
 
 
 
inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vector<vll> adj(n+1);
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(n%2==0){
        cout<<n+1<<endl;
        return;
    }
    ll mid=(n+1)/2;
    if(check(n+1,mid,n,adj)){
        cout<<n+1<<endl;
        return;
    }
    if(check(n+2,1,n,adj)){
        cout<<n+2<<endl;
        return;
    }
    cout<<n<<endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}