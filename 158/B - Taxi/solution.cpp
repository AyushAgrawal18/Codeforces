#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) a1++;
        else if (a[i] == 2) a2++;
        else if (a[i] == 3) a3++;
        else if (a[i] == 4) a4++;
    }
    int groups = a4;
    groups += a3;
    a1 = max(0, a1 - a3);
    groups += a2 / 2;
    if (a2 % 2 != 0) {
        groups += 1;
        a1 = max(0, a1 - 2);
    }
    groups += (a1 + 3) / 4;
 
    cout << groups << endl;
    return 0;
}