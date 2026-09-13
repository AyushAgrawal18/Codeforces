#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }
        int moves = min(count0, count1);
        if (moves % 2 == 1) {
            cout << "DA" << endl;
        } else {
            cout << "NET" << endl;
        }
    }
}