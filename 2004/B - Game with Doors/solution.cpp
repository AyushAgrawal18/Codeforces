#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        int L,R;
        cin>>l>>r>>L>>R;
 
        int l2=max(l,L),r2=min(r,R);
        if(r2<l2){
            cout<<1<<endl;
            continue;
        }
        long long int ans=r2-l2+1;
        if(l<l2||L<l2)
        ans++;
        if(r>r2||R>r2)
        ans++;
        cout<<ans-1<<endl;
    }
    return 0;
}