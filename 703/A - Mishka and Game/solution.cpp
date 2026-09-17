#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
    fastio();
    int t;
    cin >> t;
    int count=0;
    int sum=0;
    while(t--) {
        int m,c;
        cin>>m>>c;
        if(m>c){
            count++;
        }
        else if(c>m){
            sum++;
        }
    }
    if(count>sum){
        cout<<"Mishka"<<endl;
    }
    else if(sum>count){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}