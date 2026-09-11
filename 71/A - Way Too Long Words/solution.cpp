#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    string a;
    cin>>a;
    int x=a.length();
    if(x>10){
        cout<<a[0]<<x-2<<a[x-1]<<endl;
    }
    else{
        cout<<a<<endl;
    }
}
int main() {
    fastio();
    int n;
    cin >>n;
    while(n--) {
        solve();
}
}