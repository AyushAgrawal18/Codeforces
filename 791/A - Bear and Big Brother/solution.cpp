#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
 int a,b;
 cin>>a>>b;
 int sum=0;
 int n=10000;
 while(n--){
  sum++;
  a=3*a;
  b=2*b;
  if(a>b){
    break;
  }
 }
 cout<<sum<<endl;
}