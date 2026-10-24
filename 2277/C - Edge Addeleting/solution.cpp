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
 
int level;
vector<vll> a,up;
vll depth,top;
 
 
void dfs(ll u, ll p){
    up[0][u]=p;
    for(int j=1;j<level;j++){
        up[j][u]=up[j-1][up[j-1][u]];
    }
    for(int x: a[u]){
        if(x==p) continue;
        depth[x]=depth[u]+1;
        if(u==1) top[x]=x;
        else top[x]=top[u];
        dfs(x,u);
    }
    
}
 
 
ll lca(int u, int v){
    if(depth[u]<depth[v]){
        swap(u,v);
    }
    ll diff=depth[u]-depth[v];
    for (int j=0;j<level;j++){
        if(diff&(1<<j)){
            u=up[j][u];
        }
    }
    if(u==v) return u;
    for (int j=level-1;j>=0;j--){
        if (up[j][u]!=up[j][v]){
            u=up[j][u];
            v=up[j][v];
        }
    }
    return up[0][u];
}
 
 
ll dist(int u,int v){
    int w=lca(u,v);
    return depth[u]+depth[v]-2*depth[w];
}
 
 
inline void solve() {
    // Your solution goes here
    ll n,m;
    cin>>n>>m;
    a.assign(n+1,{});
    for (int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    }
    vll b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    level=1;
    while((1<<level)<=n) level++;
    up.assign(level,vll(n+1));
    depth.assign(n+1,0);
    top.assign(n+1,0);
    
    dfs(1, 1);
    
    ll ans=depth[n];
    for(int i=0;i<m;i++){
        int x=b[i];
        if(top[x]==top[n]) ans=max(ans,dist(x,n)+1);
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