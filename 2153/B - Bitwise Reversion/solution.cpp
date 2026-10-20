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
        ll x, y, z;
        cin >> x >> y >> z;
        int flag = 1;
        for (int i = 0; i < 30; i++){
            int bx=(x>>i)&1;  
            int by=(y>>i)&1;  
            int bz=(z>>i)&1;
            int found=0;
            for (int a=0;a<=1;a++){
                for (int b=0;b<=1;b++){
                    for (int c=0;c<=1;c++){
                        if ((a&b)==bx&&(b&c)==by&&(a&c)==bz){
                            found=1;
                            break;
                        }
                    }
                    if (found) 
                    break;
                }
                if (found) 
                break;
            }
            if (!found){
                flag=0;
                break;
            }
        }
        if (flag){
            cout<<"YES
";
        } else {
            cout<<"NO
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