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
    ll open=0,close=0;
    loop{
        if(s[i]=='(') open++;
        else close++;
    }
    if(open!=close){
        cout<<-1<<endl;
        return;
    }
    vll ans(n);
    stack<ll> st;
    loop{
        if(s[i]=='('){
            st.push(i);
        }
        else{
            if(st.empty()){
                continue;
            }
            else{
                ans[i]=1;
                ans[st.top()]=1;
                st.pop();
            }
        }
    }
    vll ans2(n);
    stack<ll> st2;
    rloop{
        if(s[i]=='('){
            st2.push(i);
        }
        else{
            if(st2.empty()) continue;
            ans2[i]=1;
            ans2[st2.top()]=1;
            st2.pop();
        }
    }
    
    
    
    ll cnt=1;
    
    loop {
        if(ans[i]==0) ans[i]=2;
    }
    for(int i=1;i<n;i++){
        if(ans[i]!=ans[i-1]){
            cnt++;
            break;
        }
    }
    if(cnt==1){
        loop ans[i]=1;
        cout<<cnt<<endl;
        loop cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    
    ll cnt2=1;
    loop {
        if(ans2[i]==0) ans2[i]=2;
    }
    for(int i=1;i<n;i++){
        if(ans2[i]!=ans2[i-1]){
            cnt2++;
            break;
        }
    }
    if(cnt2==1){
        loop ans2[i]=1;
    }
    cout<<cnt2<<endl;
    loop cout<<ans2[i]<<" ";
    cout<<endl;
    
    
    
    
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}