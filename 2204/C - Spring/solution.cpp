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
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
 
ll lcm(ll a, ll b, ll cap) {
    ll g = gcd(a, b);
    ll div = b / g;
    if (a > cap / div) return -1;
    ll result = a * div;
    return result > cap ? -1 : result;
}
 
inline void solve() {
    // Your solution goes here
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll aa=m/a,bb=m/b,cc=m/c;
        ll lab=lcm(a,b,m);
        ll lac=lcm(a,c,m);
        ll lbc=lcm(b,c,m);
        ll ab; 
        if(lab==-1){
            ab=0;
        } 
        else {
            ab=m/lab;
        }
        ll ac;
        if(lac==-1){
            ac=0;
        } 
        else{
            ac=m/lac;
        }
        ll bc;
        if(lbc==-1){
            bc=0;
        }
        else{
            bc=m/lbc;
        }
        ll abc=0;
        if (lab!=-1){
            ll labc=lcm(lab,c,m);
            if(labc==-1){
                abc=0;
            }
            else{
                abc=m/labc;
            }
        }
        ll x=6*aa-3*ab-3*ac+2*abc;
        ll y=6*bb-3*ab-3*bc+2*abc;
        ll z=6*cc-3*ac-3*bc+2*abc;
        cout << x << " " << y << " " << z << " 
";
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}