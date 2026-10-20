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
    vector<char> a(n);
    loop cin >> a[i];
    ll A_count=0;
    ll B_count=0;
    loop{
        if(a[i]=='A'){
            A_count++;
        }else{
            B_count++;
        }
    }
    if(n==2){
        if(a[0]=='A'){
            cout<<"Alice
";
    }
        else{
            cout<<"Bob
";
        }
        return;
    }
    if(B_count==1){
        cout<<"Alice
";
        return;
    }
    if(a[0]=='A'&&a[n-1]=='A'){
        cout<<"Alice
";
        return;
    }
    if(a[n-1]=='A'&&a[n-2]=='A'){
        cout<<"Alice
";
        return;
    }
    cout<<"Bob
";
    return;
 
}
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}