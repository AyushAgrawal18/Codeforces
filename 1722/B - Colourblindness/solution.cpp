#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
void solve() {
   int n;
   cin>>n;
   string a;
   string b;
   cin>>a;
   cin>>b;
   int flag;
   for(int i=0;i<n;i++){
    if(a[i]==b[i]||(a[i]=='G'&&b[i]=='B')||(a[i]=='B'&&b[i]=='G')){
        flag=1;
    }
    else{
        flag=0;
        break;
    }
   }
   if(flag==1){
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