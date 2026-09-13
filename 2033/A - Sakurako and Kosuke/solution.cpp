#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
   int n;
   cin>>n;
   if(n%2==0){
    cout<<"Sakurako"<<endl;
   }
   else{
    cout<<"Kosuke"<<endl;
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