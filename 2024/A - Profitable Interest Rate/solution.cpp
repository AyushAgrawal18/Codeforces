#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    int a,b;
    cin>>a>>b;
    int x=b-a;
    if(a>=b){
        cout<<a<<endl;
    }
    else{
        if((a-x)>0&&(b-2*x)>0){
            a=a-x;
            b=b-2*x;
            if(a>=b){
            cout<<a<<endl;
        }
        else{
            cout<<0<<endl;
        }
        }
        else{
            cout<<0<<endl;
        }
    }
}
int main() {
    fastio();
    int t;
    cin >>t;
    while(t--) {
        solve();
}
}