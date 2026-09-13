#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b+c){
        cout<<"YES"<<endl;
    }
    else if(b==a+c){
        cout<<"YES"<<endl;
    }
    else if(c==a+b){
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
    while(t--) {
        solve();
    }
    return 0;
}