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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool is_valid = true;
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(a[i + 1] - a[i]);
            if (diff != 5 && diff != 7) {
                is_valid = false;
                break;
            }
        }
 
        if (is_valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}