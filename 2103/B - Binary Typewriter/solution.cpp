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
    ll n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> a;
    int count = 1;
    
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            a.push_back(count);
            count = 1;
        }
    }
    a.push_back(count);
    if(n==1){
        if(s[0]=='0'){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
        return;
    }
    if(n==2){
        if(s[0]==s[1]){
            if(s[0]=='0'){
                cout<<2<<endl;
            }
            else{
                cout<<3<<endl;
            }
        }
        else{
            cout<<3<<endl;
        }
        return;
    }
    if(n==3){
        if(s[0]==s[1]&&s[1]==s[2]){
            if(s[0]=='0'){
                cout<<3<<endl;
            }
            else{
                cout<<4<<endl;
            }
        }
        else{
            cout<<4<<endl;
        }
        return;
    }
    if(n>3){
        ll ans=0;
        if(a.size()==1){
            if(s[0]=='0'){
                cout<<a[0]<<endl;
            }
            else{
                cout<<a[0]+1<<endl;
            }
            return;
        }
        if(a.size()==2){
                cout<<a[0]+a[1]+1<<endl;
            return;
        }
        if(a.size()==3){
            cout<<a[0]+a[1]+a[2]+1<<endl;
            return;
        }
        if(a.size()>3){
            if(s[0]=='0'){
                ans+=a[0]+a[1]+a[2]+a[3]+1;
                for(int i=4;i<a.size();i++){
                    ans+=a[i]+1;
                }
            }
            else{
                ans+=a[0]+a[1]+a[2]+1;
                for(int i=3;i<a.size();i++){
                    ans+=a[i]+1;
                }
            }
            cout<<ans<<endl;
            return;
        }
    }
}
 
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}