#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main(){
    fastio(); 
   int n,h;
   cin>>n>>h;
   int sum=0;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=h){
      sum++;
    }
    else{
      sum=sum+2;
    }
   }
   cout<<sum<<endl;
}