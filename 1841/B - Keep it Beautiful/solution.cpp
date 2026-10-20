#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        vector<int> a;
        int cnt = 0;
        while (q--) {
            int x;
            cin >> x;
            int count = cnt + (a.size() > 0 && a.back() > x);
            if (count == 0 || (count == 1 && x <= a[0])) {
                a.push_back(x);
                cnt = count;
                cout << '1';
            } else {
                cout << '0';
            }
        }
        cout << endl;
    }
    return 0;
}