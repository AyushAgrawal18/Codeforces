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
    ll n,m;
    cin>>n>>m;
    vll a(n);
    loop {
        cin>>a[i];
    }
    ll totaldigit=0;
    vll trailingzero(n);
    for(int i=0; i<n; i++){
        ll count=0;
        while(a[i]%10==0){
            count++;
            a[i]/=10;
        }   
        totaldigit+=count;
        trailingzero[i]=count;
        while(a[i]>0){
            totaldigit++;
            a[i]/=10;
        }
    }
    sort(all(trailingzero),greater<ll>());
    for(int i=0; i<n; i+=2){
        totaldigit-=trailingzero[i];
    }
    if(totaldigit>m){
        cout<<"Sasha
";
    }
    else{
        cout<<"Anna
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