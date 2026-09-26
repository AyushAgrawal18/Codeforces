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
    int n, q;
    cin>>n>>q;
    vll a(n);
    loop cin>>a[i];
    ll maxi= *max_element(all(a));
    ll mini= *min_element(all(a));
    vll ans(11);
    ans[0]=maxi-mini;
    for(int k=1;k<10;k++){
        priority_queue<ll> pq;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll x = a[i] ^ a[j];
                if ((int)pq.size() < n) {
                    pq.push(x);
                } 
                else if (x < pq.top()) {
                    pq.pop();
                    pq.push(x);
                }
            }
        }
        a.clear();
        while (!pq.empty()) {
            a.push_back(pq.top());
            pq.pop();
        }
        sort(all(a));
        ans[k]=a[n-1]-a[0];
    }
    while(q--){
        int x;
        cin>>x;
        if(x>10) cout<<0<<endl;
        else cout<<ans[x]<<endl;
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