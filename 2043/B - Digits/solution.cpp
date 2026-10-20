#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void Digit() {
    ll n, d;
    cin >> n >> d;
    int fact=1;
    int x=1;
    vector<int> result;
    result.push_back(1);
    if(n<6 && n>2){
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
       x=fact*d;
    }
 
    if (d % 3 == 0 || n > 2 ||x%3==0) {
        result.push_back(3);
    }
 
    if (d % 5 == 0) {
        result.push_back(5);
    }
 
    if (d % 7 == 0 || n >= 3 ) {
        result.push_back(7);
    }
 
    if (d % 9 == 0 || n >= 6 ||x%9==0) {
        result.push_back(9);
    }
 
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        Digit();
    }
 
    return 0;
}