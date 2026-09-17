#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
void solve() {
   int n,k;
   cin>>n>>k;
   vector<int> a(k);
   for(int i=0;i<k;i++){
    cin>>a[i];
   }
    sort(a.begin(),a.end());
    int x=a[k-1];
    int y= 2*(n-x)-k+1;
    cout<<y<<endl;
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