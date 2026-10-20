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
    cin >> n >> k;
    ll count_0 = 0, count_1 = 0, count_2 = 0;
    ll sum=0;
    vll a(n);
    loop {
        cin >> a[i];
        if(a[i]==0){
            count_0++;
        }
        else if(a[i]==1) {
            count_1++;
        }
        else if(a[i]==2) {
            count_2++;
        }
        sum += a[i];
    }
    if(k<sum){
        for(int i=1;i<=count_0;i++){
            cout << 0 << " ";
        }
        for(int i=1;i<=count_1;i++){
            cout << 1 << " ";
        }
        for(int i=1;i<=count_2;i++){
            cout << 2 << " ";
        }
        cout<<endl;
    }
    else if(k-sum==1){
        for(int i=1;i<=count_0;i++){
            cout << 0 << " ";
        }
        for(int i=1;i<=count_2;i++){
            cout << 2 << " ";
        }
        for(int i=1;i<=count_1;i++){
            cout << 1 << " ";
        }
        cout<<endl;
    }
    else{
        cout<<-1 << endl;
    }
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}