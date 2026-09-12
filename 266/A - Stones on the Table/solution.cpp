#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
  int n;
  cin>>n;
  string a;
  cin>>a;
  int sum=0;
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
      sum++;
    }
  }
  cout<<sum<<endl;
}