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
    vll a(n);
    loop cin>>a[i];
    vll b(n);
    loop cin>>b[i];
    ll aj=0;
    ll mai=0;
    loop {
        if(a[i]==1){
            aj ++;
        }
        if(b[i]==1){
            mai ++;
        }
    }
    loop {
        if(a[i]==b[i]){
            continue;
        }
        if(i%2==0){
            if(aj%2==0){
               if(a[i]==1){
                   if(b[i]==0){
                    if(aj%2==0){
                     aj--;
                    mai++;
                    }
                   }
               }
               else{
                     if(b[i]==1){
                        if(aj%2==0){
                        aj++;
                      mai--;
                        }
                     }
               }
            }
        }
        else{
            if(mai%2==0){
               if(b[i]==1){
                   if(a[i]==0){
                    if(mai%2==0){
                     mai--;
                    aj++;
                    }
                   }
               }
               else{
                     if(a[i]==1){
                        if(mai%2==0){
                        mai++;
                      aj--;
                        }
                     }
               }
            }
        }
    }
    if(aj%2>mai%2){
        cout<< "Ajisai
";
    }
    else if(mai%2>aj%2){
        cout<< "Mai
";
    }
    else{
        cout<< "Tie
";
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}