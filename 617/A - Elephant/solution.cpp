#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
  int x;
  cin>>x;
  int n;
  int m;
  if(x%5==0){
    cout<<x/5<<endl;
  }
    else{
      cout<<(x/5)+1<<endl;
    }
}