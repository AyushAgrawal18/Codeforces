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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(k);
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    sort(all(b));
    if (k == n)
    {
        for(int i = 0; i < m; i++)
        {
            cout << 1;
        }
        cout << endl;
        return;
    }
    else if (k <= n - 2)
    {
        for(int i = 0; i < m; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
    else
    {
        ll ans = n;
        for(int i = 0; i < k; i++)
        {
            if (b[i] != i + 1)
            {
                ans = i + 1;
                break;
            }
        }
        for(int i = 0; i < m; i++)
        {
            if (a[i] == ans)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}