#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define endl '
'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int main(){
    fastio(); 
    string a;
    cin >> a;
    int n = a.size();
    int u = 0, l = 0;
 
    for (int i = 0; i < n; i++) {
        if (isupper(a[i])) {
            u++;
        } else {
            l++;
        }
    }
 
    if (l >= u) {
        for (int i = 0; i < n; i++) {
            a[i] = tolower(a[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            a[i] = toupper(a[i]);
        }
    }
 
    cout << a << endl;
}