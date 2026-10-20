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
    vll a(n);
    loop cin>>a[i];
    // vector<pair<ll,ll>> p;
    // for(int i=1;i<n;i++){
    //     if(a[i]-a[i-1]!=0) p.push_back({i,i+1}); 
    // }
    vll pos(n+1,-1);
    for(int i=n-2;i>=0;i--){
        if(a[i]!=a[i+1]) pos[i+1]=i+1;
        else pos[i+1]=pos[i+2];
    }
    // for(int i=0;i<n+1;i++){
    //     cout<<pos[i]<<" ";
    // }
    
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        // bool flag=false;
        // for(int i=0;i<p.size();i++){
        //     if(l<=p[i].first && r>=p[i].second){
        //         cout<<p[i].first<<" "<<p[i].second;
        //         flag=true;
        //         break;
        //     }
        // }
        // if(!flag){
        //     cout<<-1<<" "<<-1;
        // }
        
        if(pos[l]!=-1&&pos[l]<r){
            cout<<pos[l]<<" "<<pos[l]+1;
        }
        else{
            cout<<-1<<" "<<-1;
        }
        cout<<endl;
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