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
    vll a(n), b(n);
    loop {
        cin >> a[i];
    }
    loop {
        cin >> b[i];
    }
    if (a == b) {
        cout << 0 << endl;
        return;
    }
    
    
    
    int one_a = 0;
    int mis = 0;
    bool all_ones = true;
 
    for (int i = 0; i < n; i++) {
 
        if (a[i] == 1)
            one_a++;
 
        if (b[i] == 0)
            all_ones = false;
 
        if (a[i] == 1 && b[i] == 0)
            mis++;
    }
 
    if (one_a == 0) {
        cout << -1 << endl;
        return;
    }
 
    if (all_ones) {
        cout << -1 << endl;
        return;
    }
 
    if (mis % 2 == 1) {
        cout << 1 << endl;
    }
    else {
        cout << 2 << endl;
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