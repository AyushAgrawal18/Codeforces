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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n + 1);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        vector<int> b(n+1,-1);
        int ans=0;
        for(int i=1;i<=n;i++){
            if(b[i]!=-1) continue;
            queue<int> q;
            q.push(i);
            b[i]=0;
            int count1=1,count2=0;
            bool flag=true;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                for(int v:a[u]) {
                    if(b[v]==-1){
                        b[v]=1-b[u];
                        if(b[v]==0) count1++;
                        else count2++;
                        q.push(v);
                    } else if(b[v]==b[u]){
                        flag=false;
                    }
                }
            }
            if(flag){
                ans+=max(count1,count2);
            }
        }
        cout<<ans<<"
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}