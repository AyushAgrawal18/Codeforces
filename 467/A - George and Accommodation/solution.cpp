#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main(){
    fastio(); 
   int n;
   cin>>n;
   int flag=0;
   while(n--){
   int p,q;
   cin>>p>>q;
   int x=q-p;
   if(x>=2){
    flag++;
   }
   }
       cout<<flag<<endl;
}