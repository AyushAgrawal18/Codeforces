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
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);
 
 
 
inline void solve() {
    // Your solution goes here
    int n;
    cin >> n;
    vpii a(n);
    loop{
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));
 
    vll pref(n);
    vll ans(n), res(n);
 
    pref[0] = a[0].first;
 
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+a[i].first;
    }
    ans[n-1]=n-1;
    for(int i=n-2;i>=0;i--){
        if (pref[i]>=a[i+1].first){
            ans[i]=ans[i+1];
        } 
        else {
            ans[i]=i;
        }
    }
    loop{
        res[a[i].second]=ans[i];
    }
    loop{
        cout << res[i] << " ";
    }
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