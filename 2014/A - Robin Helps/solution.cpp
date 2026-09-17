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
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int x = 0;
        int count = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                x += a[i];
            } else if (a[i] == 0 && x > 0) {
                count++;
                x--;
            }
        }
 
        cout << count << endl;
    }
    return 0;
}