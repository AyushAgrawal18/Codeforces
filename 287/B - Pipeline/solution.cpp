#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
 
bool check(ll mid, ll n, ll k) {
    ll sum = 0;
    ll right = k ;
    ll left = k-mid;
    ll sum1 = (right*(right+1))/2;
    ll sum2 = (left*(left+1))/2;
    sum = sum1 - sum2;
    ll res = 1 + sum - mid;
    return res >= n;
}
 
void solve () {
    ll n,k;
    cin >> n >> k;
    if(n==1) {
        cout<<0<<'
';
        return;
    }
    ll sum = k*(k+1)/2-(k-1);
    if(sum < n) {
        cout<<-1<<'
';
        return;
    }
    ll ans = 0;
    ll l = 1 , r = k-1 ;
    while(l<=r) {
        ll mid = l+r>>1;
        if(check(mid,n,k)) {
            ans = mid;
            r= mid-1;
        }
        else {
            l = mid+1;
        }
    }
    cout<<ans<<'
';
}
 
int main()
{
    fastio();
    solve();
    return 0;
}