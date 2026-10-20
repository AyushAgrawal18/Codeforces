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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    loop a[i]=i+1;
    string s;
    cin>>s;
    ll idx=0;
    ll idx2=n-1;
    string ans(n,'0');
    if(n==k){
        loop{
            ans[i]='-';
        }
        cout << ans << "
";
        return;
    }
    for(int i=0;i<k;i++){
        if(s[i]=='1'){
            a[idx2]=n+1;
            idx2--;
        }
    }
    for(int i=0;i<k;i++){
        if(s[i]=='0'){
            a[idx]=n+2;
            idx++;
        }
    }
    for(int i=0;i<k;i++){
        if(s[i]=='2'){
            a[idx]=n+3;
            a[idx2]=n+3;
            idx++;
            idx2--;
        }
    }
    loop{
        if(a[i]<=n){
            ans[i]='+';
        }
        else if(a[i]==n+1){
            ans[i]='-';
        }
        else if(a[i]==n+2){
            ans[i]='-';
        }
        else{
            ans[i]='?';
 
        }
    }
 
    cout << ans << "
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}