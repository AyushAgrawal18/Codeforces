#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
   int n;
   cin>>n;
   int sum=0;
   string a; 
   for(int i=0;i<n;i++){
    cin>>a;
    if((a=="X++")||(a=="++X")){
        sum++;
    }
    else{
        sum--;
    }
}
cout<<sum<<endl;
}