#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve () {
    string a;
    string b;
    cin>>a;
    cin>>b;
    int x=a.size();
    int y=b.size();
    int m=min(x,y);
    int sum=0;
    for(int i=0;i<m;i++){
        if(a[i]==b[i]){
            sum++;
        }
        else{
            break;
        }
    }
    int z=sum;
    for(int i=z;i<x;i++){
            sum++;
    }
    for(int i=z;i<y;i++){
            sum++;
    }
    if(a[0]==b[0]){
        cout<<sum+1<<endl;
    }
    else{
        cout<<sum<<endl;
    }
}
int main() {
    fastio();
    int t;
    cin >>t;
    while(t--) {
        solve();
}
}