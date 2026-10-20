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
    vll a(n);
    loop cin>>a[i];
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    vll diff;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            diff.push_back(abs(a[i]-a[j]));
        }
    }
    sort(all(diff));
    ll ans=LLONG_MAX;
    loop ans=min(ans,a[i]);
    ans=min(ans,diff[0]);
    if(k==2){
        for(int i=0;i<n;i++){
            auto it=lower_bound(diff.begin(),diff.end(),a[i]);
            if(it!=diff.end()){
                ans=min(ans,abs(*it-a[i]));
            }
            if(it!=diff.begin()){
                --it;
                ans=min(ans,abs(*it-a[i]));
            }
        }
    }
    cout<<ans<<endl;
    return;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}