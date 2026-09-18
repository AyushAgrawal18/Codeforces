#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
       ll a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    ll c=0,cc=0;
    if(a1>a3 && a2>a4)  c+=2;
    if(a1>a4 && a2>a3)  c+=2;
    if(a1==a3 && a2>a4) c+=2;
    if(a1==a4 && a2>a3) c+=2;
    if(a2==a3 && a1>a4) c+=2;
    if(a2==a4 && a1>a3) c+=2;
    cout<<c<<endl;
    }
    return 0;
}