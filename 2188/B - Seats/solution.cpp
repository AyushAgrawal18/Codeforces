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
    int n;
        string s;
        cin>>n>>s;
        int count = 0;
        loop if(s[i]=='1') count++;
        if(count==0){
            cout<<(n+2)/3<<'
';
            return;
        }
        int sum=0;
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                i++; 
                continue; 
            }
            int j=i;
            while(j<n&&s[j]=='0') 
                j++;
            int l=j-i;
            bool left=(i>0&&s[i-1]=='1');
            bool right=(j<n&&s[j]=='1');
            if(left&&right){
                int a=max(0,l-2);
                sum+=(a+2)/3;
            } else if(left||right){
                int m=l-1;
                sum+=(m>0?(m+2)/3:0);
            } else {
                sum+=(l+2)/3;
            }
            i=j;
        }
        count=count+sum;
        cout<<count<<'
';
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}