#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int a=min(x,y);
    if(n%a==0){
        cout<<n/a<<endl;
    }
    else{
        cout<<(n/a)+1<<endl;
    }
    }
int main() {
    fastio();
    ll t;
    cin >>t;
    while(t--) {
        solve();
        }
}