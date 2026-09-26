#include <bits/stdc++.h>
using namespace std;
 
// Author: Ayush_Agrawal_18
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<int, int> freq;
    for (int x : a) {
        freq[x]++;
    }
    int maxi = 0;
    for (auto &p : freq) {
        maxi = max(maxi, p.second);
    }
    cout << (n - maxi) << endl;
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