#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);
 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] <= n) {
                freq[a[i]]++;
            }
        }
 
        int result = 0;
        for (int i = 0; i <= n; ++i) {
            result += freq[i] / 2;
        }
 
        cout << result << endl;
    }
 
    return 0;
}