#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
 string a;
 cin>>a;
  set<char> uniqueChars(a.begin(), a.end());
  string result(uniqueChars.begin(), uniqueChars.end());
  sort(result.begin(),result.end());
  int x=result.size();
  if(x%2==0){
    cout<<"CHAT WITH HER!"<<endl;
  }
  else{
    cout<<"IGNORE HIM!"<<endl;
  }
}