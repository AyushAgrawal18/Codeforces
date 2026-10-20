#include <iostream>
#include <cstring>
using namespace std;
 
typedef long long l;
 
char buf[1000000];
l n;
 
bool check_1100(l i) {
    if (i < 0) return false;
    if (i >= n - 3) return false;
    return buf[i] == '1' && buf[i + 1] == '1' && buf[i + 2] == '0' && buf[i + 3] == '0';
}
 
void solve() {
    cin >> buf;
    n = strlen(buf);
    l count = 0;
 
    for (l i = 0; i < n; i++) {
        if (check_1100(i)) count++;
    }
 
    l q;
    cin >> q;
    while (q--) {
        l i, v;
        cin >> i >> v;
        i--;
        if (buf[i] != '0' + v) {
            bool before = check_1100(i - 3) || check_1100(i - 2) || check_1100(i - 1) || check_1100(i);
            buf[i] = '0' + v;
            bool after = check_1100(i - 3) || check_1100(i - 2) || check_1100(i - 1) || check_1100(i);
            count += after - before;
        }
        cout << (count ? "YES" : "NO") << '
';
    }
}
 
int main() {
    l t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}