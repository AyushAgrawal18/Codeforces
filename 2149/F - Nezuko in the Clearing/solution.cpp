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
 
bool check(ll h,ll d,ll mid){
    ll tot = h+mid;
    ll block = mid+1;
    ll com = d/block;
    ll rem = d%block;
    ll c = 0;
    c+=(ll)rem*(com+1)*(com+2)/2;
    c+=(ll)(block-rem)*com*(com+1)/2;
    return tot>c;
}
 
inline void solve() {
    // Your solution goes here
    ll h,d;
    cin>>h>>d;
    ll low = 0,high = 1e18,ans=0;
    while(low<=high){
        ll mid = low+(high-low)/2;
        if(check(h,d,mid)){
            ans=mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<d+ans<<endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}