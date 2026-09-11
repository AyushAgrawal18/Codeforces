#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if((a+b)==3){
        cout<<3<<endl;
    }
    else if((a-b)==1||(a-b)==-1){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}