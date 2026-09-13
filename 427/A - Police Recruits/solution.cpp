#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
    fastio();
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            sum=sum+a[i];
        }
        else{
            sum--;
            if(sum<0){
                sum=0;
                count++;
            }
        }
    }
    cout<<count<<endl;
}