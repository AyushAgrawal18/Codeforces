#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
 string a;
 cin>>a;
 int n=a.size();
 int sum=0;
 for(int i=0;i<n;i++){
  if((a[i]=='4')||(a[i]=='7')){
    sum++;
  }
 }
  if(sum==4||sum==7){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}