#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
 
        ll sum = a + b + c; 
        ll x = n / sum; 
        ll y = x * sum; 
        ll day = x * 3;
 
        if (y >= n) {
            cout << day << "
";
            continue;
        }
 
        if (y + a >= n) {
            cout << day + 1 << "
";
        } else if (y + a + b >= n) {
            cout << day + 2 << "
";
        } else {
            cout << day + 3 << "
";
        }
    }
 
    return 0;
}