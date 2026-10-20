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
    string s;
    cin>>s;
    if (s[0]=='0'||s.find("00")!=string::npos) {
        cout<<-1<<'
';
        return;
    }
 
    bool one=true;
    bool two=true;
 
    for (int i=1;i<n;i++) {
        if (s[i]!='0'&&s[i-1]!='0'&&s[i]!=s[i-1]){
            one=false;
            break;
        }
    }
 
    for (int i=0;i<n;){
        if (s[i]=='0'){
            i++;
            continue;
        }
        int j=i;
        while (j<n&&s[j]==s[i]){
            j++;
        }
        int len=j-i;
        if (j<n&&s[j]=='0'&&len%2==0) {
            one=false;
        }
 
        if (i>0 && s[i-1]!='0' && j<n && s[j]!='0' && len==2) {
            two=false;
        }
        i=j;
    }
 
    if(one){
        cout<<1<<endl;
    }
    else if(two){
        cout<<2<<endl;
    }
    else {
        cout<<3<<endl;
    }
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}