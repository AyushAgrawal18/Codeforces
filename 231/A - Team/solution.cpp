#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
    fastio();
    int t;
    int sum=0;
    cin >>t;
    while(t--) {
            int a[3];
    int count =0;
    
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        count =count +a[i];
    }
    if(count>=2){
        sum++;
    }
}
cout<<sum<<endl;
}