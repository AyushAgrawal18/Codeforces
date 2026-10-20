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
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);
 
inline void solve()
{
    // Your solution goes here
    ll n;
    cin >> n;
    vll a(n);
    loop cin >> a[i];
    vll pref(n), suf(n);
    if(a[0]==n){
        no();
        return;
    }
    if(a[n-1]==1){
        no();
        return;
    }
    pref[0] = a[0];
    for(int i=1;i<n;i++){
        pref[i] = min(pref[i-1],a[i]);
    }
    suf[n-1]=a[n-1];
    for (int i=n-2;i>=0;i--){
        suf[i]=max(suf[i+1],a[i]);
    }
    bool flag = true;
    for (int i = 0; i < n - 1; i++){
        if (pref[i] > suf[i + 1]){
            flag = false;
            break;
        }
    }
    if (flag){
        yes();
    }
    else{
        no();
    }
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