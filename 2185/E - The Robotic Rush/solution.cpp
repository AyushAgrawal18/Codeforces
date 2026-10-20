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
    ll n,m,k;
    cin >> n >> m >> k;
    vll a(n), b(m);
    loop cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    string s;
    cin >> s;
    sort(all(b));
    vll r(n,INF), l(n,INF);
    for(int i = 0; i < n; i++) {
        auto it = upper_bound(all(b), a[i]);
        if(it != b.end()) r[i] = *it - a[i];
        if(it != b.begin()) l[i] = a[i] - *(--it);
    }
    ll dis=0;
    vll maxR(k+1,0), maxL(k+1,0);
    for(int i=0;i<k;i++){
        if(s[i]=='R') {
            dis++;
        }
        else {
            dis--;
        }
        maxR[i+1] = max(maxR[i], dis);
        maxL[i+1] = max(maxL[i], -dis);
    }
    vll ans(k+2,0);
    for(int i=0;i<n;i++){
        int lo=1,hi=k+1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(maxR[mid]>=r[i] || maxL[mid]>=l[i]) {
                hi=mid;
            }
            else lo=mid+1;
        }
        ans[lo]++;
    }
    ll res=n;
    for(int i=1;i<=k;i++) {
        res-=ans[i];
        cout << res << " ";
    }
    cout << "
";
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}