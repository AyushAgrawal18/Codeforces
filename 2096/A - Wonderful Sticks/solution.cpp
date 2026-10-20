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
    cin >> n;
    string a;
    cin>>a;
    ll cnt=0;
    for(ll i=0;i<a.size();i++){
        if(a[i]=='<'){
            cnt++;
        }
    }
    ll num=cnt+1;
    vector<ll> v(n);
    v[0]=num;
    ll x=num;
    ll y=num;
    for(ll i=1;i<n;i++){
        if(a[i-1]=='<'){
            v[i]=x-1;
            x--;
        }
        else{
            v[i]=y+1;
            y++;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}