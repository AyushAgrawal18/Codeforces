#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
  int n;
  cin>>n;
  vector<int>a(n);
  vector<int>b(n);
  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
  }
  int maxi=a[0];
  for(int i=0;i<n;i++){
    maxi=max(maxi,a[i]);
  }
  int sum=b[0];
  for(int i=0;i<n;i++){
    sum=max(sum,b[i]);
  }
  cout<<(2*(sum+maxi))<<endl;
}
int main() {
    fastio();
    ll t;
    cin >>t;
    while(t--) {
        solve();
}
}