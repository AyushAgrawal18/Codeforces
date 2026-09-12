#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main(){
    fastio(); 
    string a;
    cin >> a;
    string b;
    cin >> b;
    int n= a.size();
    int m= b.size();
    int l=0;
    int r=n-1;
    int flag;
    for(int i=0;i<n;i++){
      if(a[l]==b[r]){
        l++;
        r--;
        flag=1;{
 
        }
      }
      else{
        flag=0;
        break;
      }
    }
    if(flag==1 && m==n){
      cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }
}