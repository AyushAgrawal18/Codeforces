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
    ll n,x,y;
    cin>>n>>x>>y;
    vll a(n);
    loop cin>>a[i];
    // vll rx(n);
    // loop rx[i]=a[i]%x;
    ll ans=0;
    map<pair<ll,ll>,ll> freq;
    loop{
        ll rx=a[i]%x;
        ll ry=a[i]%y;
        
        ll needx=(x-rx)%x;
        ll needy=ry;
        
        ans+=freq[{needx,needy}];
        
        freq[{rx,ry}]++;
    }
    // Brute Force O(n^2) TLE aayega
    // ll ans=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if((a[i]+a[j])%x==0 && (a[i]-a[j])%y==0) ans++;
    //     }
    // }
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