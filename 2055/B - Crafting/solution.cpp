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
    vll b(n);
    ll x=0;
    ll pos;
    ll flag=1;
    loop{
        cin>>a[i];
    }
    loop{
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        int temp=b[i]-a[i];
        if(temp>x){
            pos=i;
            x=temp;
        }
    }
   loop{
    if(i==pos){
        continue;
    }
    else{
        if((a[i]-b[i])<x){
            flag=0;
        }
    }
   }
    if(flag==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
 
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}