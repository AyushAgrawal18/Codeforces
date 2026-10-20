#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
//  Author-> Ayush_Agrawal_18
 
void solve() {
    int n, a, b, x = 0, y = 0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    for(int i=0;i<100000;i++){
    for (int i = 0; i < n; i++) {
        if (x==a && y == b) {
            cout << "YES" << endl;
            return;
        }
        if (s[i] == 'N') y++;
        else if (s[i] == 'E') x++;
        else if (s[i] == 'S') y--;
        else if (s[i] == 'W') x--;
    }
    }
    if (x==a&&y==b) {
    } else {
        cout << "NO" << endl;
    }
}
int main() {
    fastio();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}