#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long ll;
typedef vector<int> vi;
 
ll product_of_digits(const vi &a) {
    ll prod = 1;
    for(int d : a) prod *= d;
    return prod;
}
 
inline void solve() {
    ll n;
    cin >> n;
 
    vi digits;
    ll temp = n;
    while(temp) {
        digits.push_back(temp % 10);
        temp /= 10;
    }
    reverse(digits.begin(), digits.end());
 
    ll ans = product_of_digits(digits);
 
    for(int i = 0; i < digits.size(); i++) {
        if(digits[i] == 0) continue;
        vi temp_digits = digits;
        temp_digits[i]--;              // Decrease current digit
        for(int j = i + 1; j < temp_digits.size(); j++) temp_digits[j] = 9; // trailing 9s
 
        // Skip leading zeros
        int start = 0;
        while(start < temp_digits.size() && temp_digits[start] == 0) start++;
 
        if(start < temp_digits.size()) {
            vi valid_digits(temp_digits.begin() + start, temp_digits.end());
            ans = max(ans, product_of_digits(valid_digits));
        }
    }
 
    cout << ans << "
";
}
 
int main() {
    fastio();
    solve();
    return 0;
}