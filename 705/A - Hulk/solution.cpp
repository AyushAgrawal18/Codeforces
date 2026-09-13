#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++) {
        if(i%2==1) {
            cout<<"I hate ";
        }
        else {
            cout<<"I love ";
        }
        if(i!=n) {
            cout<<"that ";
        }
    }
    cout<<"it"<<endl;
}
int main() {
    fastio();
    int t=1;
    while(t--) {
        solve();
        }
}