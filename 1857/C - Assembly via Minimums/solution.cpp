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
    ll m=n*(n-1)/2;
    vll b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(all(b));
    vll a;
    a.pb(b[0]);
    ll x=0;
    for(int i=1;i<m;i++){
        if(a[x]==b[i]) continue;
        else{
            a.pb(b[i]);
            x++;
        }
    }
    for(int i=a.size();i<n;i++){
        a.pb(a[i-1]);
    }
    vll ans(n,1e18);
    for(int i=0;i<n;i++){
        ll x = a[i];
        int cnt=0;
        for(int j=0;j<m;j++){
            if(b[j]==x) cnt++;
        }
        for(int i=0;i<n;i++){
            int can = n-(i+1);
            if(can<=cnt && ans[i]==1e18){
                ans[i]=x;
                cnt-=can;
            }
            if(cnt==0) break;
        }
    }
    loop cout<<ans[i]<<" ";
    cout<<endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}