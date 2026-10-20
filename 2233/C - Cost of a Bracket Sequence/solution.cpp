#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        // close[i] = number of ')' in s[i...n-1]
        vector<int> close(n + 1, 0);
 
        for (int i = n - 1; i >= 0; i--) {
            close[i] = close[i + 1] + (s[i] == ')');
        }
 
        int open = 0;
 
        int best = INT_MAX;
        int cut = 0;
 
        // cut = i
        // left  = [0 ... i-1]
        // right = [i ... n-1]
        for (int i = 0; i <= n; i++) {
 
            int cur = open + close[i];
 
            if (cur < best) {
                best = cur;
                cut = i;
            }
 
            if (i < n && s[i] == '(')
                open++;
        }
 
        string ans(n, '0');
 
        for (int i = 0; i < n && k > 0; i++) {
 
            if (i < cut && s[i] == '(') {
                ans[i] = '1';
                k--;
            }
            else if (i >= cut && s[i] == ')') {
                ans[i] = '1';
                k--;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}