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
 
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define loop for (int i = 0; i < n; i++)
#define rloop for (int i = n - 1; i >= 0; i--)
#define yes() cout << "YES
"
#define no() cout << "NO
"
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vll> vvll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);
 
inline void solve(){
    // Your solution goes here
    ll n;
    cin >> n;
    vll a(n);
    loop cin >> a[i];
    ll x = 500;
    vvll pos(x+1);
    loop{
        if (a[i] <= x)
            pos[a[i]].push_back(i);
    }
    ll ans = 0;
    for (ll v = 1; v <= x; ++v){
        if (pos[v].empty())
            continue;
        vll flag(n);
        for (ll c : pos[v])
            flag[c] = 1;
        loop{
            ll m = i-v*a[i];
            if (m>=0&&m<i&&flag[m])
                ans++;
        }
    }
    loop{
        if (a[i]>x){
            ll s = a[i];
            ll k=1;
            for (ll j=i+s;j<n;j+=s){
                if (a[j]==k)
                    ans++;
                k++;
            }
        }
    }
    cout<<ans<<'
';
}
 
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}