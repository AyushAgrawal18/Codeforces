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
    loop cin>>a[i];
    sort(all(a));
    bool has5=false,no5=false;
    
    loop{
        if(a[i]%5==0){
            has5=true;
        }
        else{
            no5=true;
        }
    }
    if(has5&&no5){
        no();
        return;
    }
    if(has5){
        loop{
            a[i]+=(a[i]%10);
        }
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                no();
                return;
            }
        }
        yes();
        return;
    }
    if(no5){
        loop{
            while(a[i]%10!=2) a[i]+=(a[i]%10);
        }
        // sort(all(a));
        // for(int i=0;i<n-1;i++){
        //     while(a[i]<a[n-1]){
        //         a[i]+=(a[i]%10);
        //     }
        // }
        for(int i=1;i<n;i++){
            if(a[i]%20!=a[0]%20){
                no();
                return;
            }
        }
        yes();
        return;
    }
    
    // loop cout<<a[i]<<" ";
    // cout<<endl;
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}