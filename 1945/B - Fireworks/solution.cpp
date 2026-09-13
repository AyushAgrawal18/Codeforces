#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    ll a,b,m;
    cin>>a>>b>>m;
    ll x=((a+m)/a)+((b+m)/b);
    cout<<x<<endl;
}
int main() {
    fastio();
    int t;
    cin >>t;
    while(t--) {
        solve();
}
}