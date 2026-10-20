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
#define loop for(int i = 1; i <= n; i++)
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
        vll a(n+1), b(n+1);
        loop cin >> a[i];
        loop cin >> b[i];
        ll aj = 0, mai = 0;
        loop{
            aj ^= a[i];
            mai ^= b[i];
        }
        if (aj == mai){
            cout << "Tie
";
            return;
        }
        ll c=aj^mai;
        ll k=0;
        for (int x=20;x>=0;x--){
            if (c&(1<<x)){
                k = x;
                break;
            }
        }
        ll l =-1;
        loop{
            ll x=a[i]^b[i];
            if (((x>>k)&1)==1)
                l=i;
        }
        if (l==-1){
            if (((aj>>k)&1)==1)
                cout<<"Ajisai
";
            else
                cout<<"Mai
";
        }
        else{
            if (l%2 == 1)
                cout<<"Ajisai
";
            else
                cout<<"Mai
";
        }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}