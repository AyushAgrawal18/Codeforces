#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
  int k,n,w;
  cin>>k>>n>>w;
  int s=w*(w+1)/2*k;
  if(n>=s){
    cout<<0<<endl;
  }
  else{
    cout<<s-n<<endl;
  }
}