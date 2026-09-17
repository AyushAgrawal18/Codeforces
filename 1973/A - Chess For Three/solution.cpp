#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
void solve() {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    int x=(p1+p2+p3)/2;
    int sum=0;
    if ((p1 + p2 + p3) % 2 != 0) {
        cout << -1 << endl;
    } else {
       while(p1--){
        if(x>0){
            x--;
            sum++;
        }
        else{
            break;
        }
       }
       while(p2--){
        if(x>0){
            x--;
            sum++;
        }
       }
       cout<<sum<<endl;
    }
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}