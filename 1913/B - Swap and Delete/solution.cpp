#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        vector<int> cnt(2, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }
        int i;
        for (i = 0; i <= n; ++i) {
            if (i == n || cnt[1 - (s[i] - '0')] == 0) {
                cout << n - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}