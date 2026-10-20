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
    ll n,m,k;
    cin >> n >> m >> k;
    vll v(n);
    loop cin >> v[i];
    vector <tuple<ll,ll,ll>> query(m);
    for(int i=0;i<m;i++) {
        cin >> get<0>(query[i]) >> get<1>(query[i]) >> get<2>(query[i]);
    }
    vector <pii> temp;
    for(int i=0;i<k;i++) {
        ll l,r;
        cin >> l >> r;
        temp.pb({l,r});
    }
    vector <ll> tempo(m);
    for(auto i : temp) {
        ll start = i.first;
        ll end = i.second;
        tempo[start-1]++;
        if(end<m) tempo[end]--; 
    }
    for(int i=1;i<m;i++) {
        tempo[i]+=tempo[i-1];
    }
    vll tempo2(n);
    for(int i=0;i<m;i++) {
        ll times=tempo[i];
        ll l = get<0>(query[i]);
        ll r = get<1>(query[i]);
        ll d = get<2>(query[i]);
        tempo2[l-1]+=(d*times);
        if(r<n) tempo2[r]-=(d*times); 
    }
    for(int i=1;i<n;i++)
        tempo2[i] += tempo2[i-1];
 
    for(int i=0;i<n;i++)
        cout << v[i] + tempo2[i] << " ";
 
    cout << endl;  
}
 
int main() {
    fastio();
    solve();
    return 0;
}