#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string a, b, c;
    cin >> a >> b;
    
    long long int x = a.size();
    c.resize(x);
    
    for(long long int i = 0; i < x; i++) {
        if (a[i] == b[i]) {
            c[i] = '0';
        } else {
            c[i] = '1';
        }
    }
 
    cout << c << endl;
}