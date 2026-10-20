#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
 
        vector<int> x(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            x[i] = x[i + 1] + (a[i] == '1');
        }
 
        int count = 0;
        int ans = -1;
        int dis = n * 2;
        int thres = (n + 1) / 2;
 
        for (int i = 0; i <= n; ++i) {
            if (count >= (i + 1) / 2 && x[i] >= (n - i + 1) / 2 && abs(n - 2 * i) < dis) {
                dis = abs(n - 2 * i);
                ans = i;
            }
            if (i != n) {
                count += (a[i] == '0');
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}