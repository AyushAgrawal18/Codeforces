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
   vector<int>v(n);
   int count =0;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   for(int i=0;i<n;i++){
     if(v[i]==1){
        count=0;
        break;
    }
    else{
        count++;
    }
   }
   if(count>0){
    cout<<"EASY"<<endl;
   }
   else{
     cout<<"HARD"<<endl;
   }
}