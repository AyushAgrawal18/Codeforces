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
    string s;
    cin>>n>>s;
    if(s[0]=='1'){
        ll cnt0=0;
        loop if(s[i] == '0') cnt0++;
        cout<<cnt0<<endl;
    } 
    else {
        int p=-1;
        ll O=0;
        loop{
            if(s[i]=='1'){
                if(p==-1) p=i+1;
                O++;
            }
        }
        if(p==-1){
            cout<<0<<endl;
        } 
        else {
            ll cum=0;
            ll best=INF;
            for(int k=0;k<=n;k++){
                if(k>0) cum+=(s[k-1]=='1');
                if(k>=p-1){
                    ll val=2*cum-k;
                    if(val<best) best=val;
                }
            }
            ll ans=best+n-O;
            cout<<ans<<endl;
        }
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}