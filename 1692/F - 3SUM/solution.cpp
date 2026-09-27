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
    cin>>n;
    vll a(n);
    vll dig(10);
    loop{
        ll x;
        cin>>x;
        ll rem=x%10;
        a[i]=rem;
        dig[rem]++;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            for (int k = j; k < 10; k++) {
                dig[i]--;
                dig[j]--;
                dig[k]--;
                int sum=i+j+k;
                if(dig[i]>=0&&dig[j]>=0&&dig[k]>=0){
                    int pos= sum%10;
                    if(pos==3){
                        yes();
                        return;
                    }
                }
                dig[i]++;
                dig[j]++;
                dig[k]++;
            }
        }
    }
    no();
    
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}