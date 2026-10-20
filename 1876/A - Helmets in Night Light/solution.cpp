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
    ll n,p;
    cin>>n>>p;
    vpii a(n);
    vpii b;
    int x;
    loop{
      cin>>a[i].second;
    }
    loop{
      cin>>a[i].first;
      a[i].first =min(p,a[i].first);
    }
    sort(a.begin(),a.end());
   if(p<=a[0].first){
    cout<<p*n<<endl;
   }
   else{
   ll count=1;
   ll cost=p;
   loop{
    if(count+a[i].second>=n){
      cost+=(n-count)*a[i].first;
      break;
      }
      cost+=a[i].second*a[i].first;
      count+=a[i].second;
   }
   cout<<cost<<endl;
   }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}