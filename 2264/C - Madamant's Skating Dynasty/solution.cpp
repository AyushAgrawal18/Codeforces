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
 
const ll MOD = 998244353;
const ll INF = 1e18;
const double PI = acos(-1);
 
 
ll modpow(ll a,ll b) {
    ll res=1;
    while(b) {
        if(b&1) res=res*a%MOD;
        a=a*a%MOD;
        b>>=1;
    }
    return res;
}
 
 
 
inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vll a(n);
    loop cin>>a[i];
    sort(a.begin(),a.end());
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    vll suff(n+1,0);
    for(int i=n-1;i>=0;i--){
        suff[i]=(suff[i+1]+a[i])%MOD;
    }
    
    ll fact=1;
    for(int i=1;i<n;i++){
        fact=(fact*i)%MOD;
    }
    ll sum=0;
    for(int i=0;i<n-1;i++){
        ll x=n-i-1;
        ll y=suff[i+1];
        ll count=y*modpow(x,MOD-2)%MOD;
        count=(count-a[i]+MOD)%MOD;
        sum=(sum+count)%MOD;
    }
    cout<<fact*sum%MOD<<endl;
    
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}