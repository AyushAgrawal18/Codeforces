#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(2*n+1);
        vector<vector<int>> pos(n+1);
        for (int i = 1; i <= 2*n; ++i) {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }
        vector<int> S;                    
        vector<int> leftPairs, rightPairs;
        for (int v = 1; v <= n; ++v) {
            int p = pos[v][0], q = pos[v][1];
            if ((p <= n && q <= n)) {
                leftPairs.push_back(v);
                leftPairs.push_back(v);
            } else if ((p > n && q > n)) {
                rightPairs.push_back(v);
                rightPairs.push_back(v);
            } else {
                S.push_back(v);
            }
        }
 
        int need = 2 * k;
        vector<int> L, R;
        if ((int)S.size() >= need) {
            for (int i = 0; i < need; ++i) {
                L.push_back(S[i]);
                R.push_back(S[i]);
            }
        } else {
            int takeS = (int)S.size();
            if ((need - takeS) % 2 == 1) {
                takeS--;
            }
            for (int i = 0; i < takeS; ++i) {
                L.push_back(S[i]);
                R.push_back(S[i]);
            }
            int rem = need - takeS; 
            for (int i = 0; i < rem; ++i) {
                L.push_back(leftPairs[i]);
                R.push_back(rightPairs[i]);
            }
        }
 
        for (int i = 0; i < (int)L.size(); ++i) {
            if (i) cout << ' ';
            cout << L[i];
        }
        cout << '
';
        for (int i = 0; i < (int)R.size(); ++i) {
            if (i) cout << ' ';
            cout << R[i];
        }
        cout << '
';
    }
    return 0;
}