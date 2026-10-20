#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    int x=0,rem=0;
    int pos=0;
    int flag = 0;
    int count = 0;
    int n = a.length();
    if(n<4){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(a[i]=='A'&&a[i+1]=='B'){
                pos=i+2;
                rem=1;
                break;
            }
        }
        if(rem==1){
        for(int i=pos;i<n-1;i++){
            if(a[i]=='B'&&a[i+1]=='A'){
                flag=1;
                break;
            }
        }
        }
        rem=0;
        for(int i=0;i<n-1;i++){
            if(a[i]=='B'&&a[i+1]=='A'){
                pos=i+2;
                rem=1;
                break;
            }
        }
        if(rem==1){
        for(int i=pos;i<n-1;i++){
            if(a[i]=='A'&&a[i+1]=='B'){
                flag=1;
                break;
            }
        }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
}