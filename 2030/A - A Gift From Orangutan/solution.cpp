#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mx = 0, mn = 1000000;
        vector<int> lst(n);
        for (int i = 0; i < n; i++) {
            cin >> lst[i];
            mx = max(mx, lst[i]);
            mn = min(mn, lst[i]);
        }
        cout << (mx - mn) * (n - 1) << endl;
    }
    return 0;
}