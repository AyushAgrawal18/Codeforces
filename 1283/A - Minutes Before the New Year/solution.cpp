#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    int q;
    cin>>q;
    while(q--){
        int h,m;
        cin>>h>>m;
        cout<<(1440-h*60-m)<<endl;
    }
}
int main() {
    fastio();
   
        solve();
}