#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=c*d;
    int b=k*l/nl;
    int q=p/np;
    int x=min(b,a);
    int y=min(x,q);
    cout<<y/n<<endl;
}