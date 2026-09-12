#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
    fastio();
    int t;
    cin >>t;
        vector<int>v(100001);
        v[0]=1;
        for(int i=1;i<100001;i++){
            v[i]=(2*(v[i-1]))%(1000000000+7);
        }
        vector<int>n(t);
        vector<int>k(t);
        for(int i=0;i<t;i++){
            cin>>n[i];
        }
        for(int i=0;i<t;i++){
            cin>>k[i];
            cout<<v[k[i]]<<endl;
        }
 
}