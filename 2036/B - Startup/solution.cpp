#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        unordered_map<int, vector<int>>costs;
 
        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
        costs[b].push_back(c);
        }
        vector<ll> sums;
 
        for (auto &entry :costs) {
            auto &costs = entry.second;
            sort(costs.begin(), costs.end(), greater<int>());
 
            ll brand_sum = 0;
            for (int cost : costs) {
                brand_sum += cost;
            }
 
            sums.push_back(brand_sum);
        }
        sort(sums.begin(), sums.end(), greater<ll>());
 
        ll profit = 0;
        for (int i = 0; i < min(n, (int)sums.size()); i++) {
            profit += sums[i];
        }
 
        cout << profit << endl;
    }
    return 0;
}