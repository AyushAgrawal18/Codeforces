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
    int n, m; 
    cin >> n >> m;
    vector<vi> a(n, vi(m));
    map<int, int> cost;
    loop rep(j, 0, m) {
        cin >> a[i][j];
        cost[a[i][j]] = 1;
    }
    vpii dir = {{0,1},{1,0},{0,-1},{-1,0}};
    loop rep(j, 0, m) {
        int color=a[i][j];
        for (int k = 0; k < 4; k++) {
            int ni=i+dir[k].first,nj=j+dir[k].second;
            if (ni>=0&&ni<n&&nj>=0&&nj<m&&a[ni][nj]==color) {
                cost[color]=2;
            }
        }
    }
    int total=0,maxi=0;
    for (auto it=cost.begin();it!=cost.end();it++) {
        total+=it->second;
        maxi=max(maxi,it->second);
    }
    cout<<total-maxi<<endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}