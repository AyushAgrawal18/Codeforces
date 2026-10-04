#include <bits/stdc++.h>
using namespace std;
 
/* 
  ****************************************************
  *                                                  *
  *             COMPETITIVE PROGRAMMING              *
  *                                                  *
  *            Author: Ayush Kumar Agrawal           *
  *                  Code Smart, Win Big             *
  *                                                  *
  ****************************************************
*/
 
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define loop for(int i = 0; i < n; i++)
#define rloop for(int i = n-1; i >= 0; i--)
#define yes() cout << "YES
"
#define no() cout << "NO
"
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);
 
 
// Divide and Conquer (MergeSort Technique)
ll mergeSort(vpii &a, int l, int r) {
    if (l >= r) return 0;
 
    int mid=l+(r-l)/2;
    ll ans=0;
    ans+=mergeSort(a,l,mid);
    ans += mergeSort(a,mid+1,r);
    vpii temp;
    int i=l,j=mid+1;
 
    while(i<=mid&&j<=r){
        if(a[i].second<=a[j].second){
            temp.pb(a[i]);
            i++;
        } 
        else{
            temp.pb(a[j]);
            j++;
            ans+=mid-i+1;
        }
    }
    while(i<=mid){
        temp.pb(a[i]);
        i++;
    } 
    while(j<=r){
        temp.pb(a[j]);
        j++;
    } 
    for (int k=l;k<=r;k++) {
        a[k]=temp[k-l];
    }
 
    return ans;
}
 
 
 
 
inline void solve() {
    // Your solution goes here
    ll n;
    cin>>n;
    vpii a(n);
    loop cin>>a[i].second>>a[i].first;
    sort(all(a));
    ll ans=0;
    // n^2 Approch Brute force nahi chalega (TLE)
    
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i].second>a[j].second) ans++;
    //     }
    // }
    
    ans=mergeSort(a,0,n-1);
    cout<<ans<<endl;
    
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}