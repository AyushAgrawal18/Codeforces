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
        const int CC=(1<<26)-1;
        int n, k;
        cin >> n >> k;
        vi a(n, 0);
        for (int j=0;j<k;j++){
            string s;
            cin >> s;
            loop{
                a[i]|=1<<(s[i]-'a');
            }
        }
        vi div;
        for (int d=1; d*1LL*d<=n;d++){
            if (n%d==0){
                div.pb(d);
                if (d!=n/d)
                    div.pb(n/d);
            }
        }
        sort(all(div));
        string ans(n,' ');
        for (int d : div){
            vi temp(d, CC);
            bool ok = true;
            for (int j = 0; j < d && ok; ++j){
                int pok = CC;
                for (int pos=j;pos<n;pos+=d){
                    pok &= a[pos];
                    if (pok == 0)
                        break;
                }
                if (pok == 0){
                    ok = false;
                }
                else{
                    temp[j] = pok;
                }
            }
            if (!ok)
                continue;
            ans.resize(n);
            loop{
                int m = temp[i%d];
                int bit = __builtin_ctz(m);
                ans[i]=(char)('a'+bit);
            }
            break;
        }
        cout<<ans<<'
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
 
    while (t--) solve();
    return 0;
}