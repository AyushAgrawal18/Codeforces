#include <iostream>
#define ll long long
using namespace std;
ll maxCoins(ll n) {
    if (n <= 3) {
        return 1;
    }
    return maxCoins(n / 4) * 2;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin >> n;
 
        cout << maxCoins(n) << endl;
    }
 
    return 0;
}