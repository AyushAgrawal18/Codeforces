#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main() {
    fastio();
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int n = min(a.size(), b.size());
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            cout << -1 << endl;
            return 0;
        } else if (a[i] > b[i]) {
            cout << 1 << endl;
            return 0;
        }
    }
    if (a.size() < b.size()) {
        cout << -1 << endl;
    } else if (a.size() > b.size()) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}