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
    vector<ll>a(n);
    loop{
        cin>>a[i];
    }
    vector<ll>b(n);
    int flag=0;
    // loop{
    //     b[i]=a[i];
    // }
    // sort(b.begin(),b.end());
    // loop{
        for(int i=0;i<n-1;i++){
        // if(a[i+1]>a[i]){
        int x=min(a[i],a[i+1]);
            a[i]=a[i]-x;
            a[i+1]=a[i+1]-x;
            // i++;
        // }
        // if(flag==1){
        //     break;
        // }
    }
     loop{
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        loop{
            if(a[i]==b[i]){
                flag=1;
                // continue;
            }
            else{
                flag=0;
                break;
            }
        }
    // if(flag==1){
    //         break;
    //     }
    // }+
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}