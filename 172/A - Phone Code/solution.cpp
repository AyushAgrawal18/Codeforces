#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=a[0].length();
    int y=1e18;
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<x;j++){
            if(a[i][j]==a[i+1][j]){
                count++;
            }
            else{
                break;
            }
        }
        y=min(y,count);
        count=0;
    }
    cout<<y<<endl;
}