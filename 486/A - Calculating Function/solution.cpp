#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main() {
    fastio();
    ll n;
    cin >> n;
    ll a;
    ll b;
 
    if (n % 2 == 0) {
        // Safe calculation to avoid overflow
        ll half_n = n / 2;
        a = half_n * (half_n + 1);
        b = (n / 2) * (n / 2);  // (n*n)/4 might overflow
    } else {
        ll half_n_plus_1 = (n + 1) / 2;
 
        if (half_n_plus_1 % 2 == 0) {
            a = (n / 4) * (n + 1) + half_n_plus_1;
            b = ((n / 4) + 1) * (n + 1);
        } else {
            a = (n / 4) * (n + 1);
            b = (n / 4) * (n + 1) + half_n_plus_1;
        }
    }
 
    cout << a - b << endl;
}