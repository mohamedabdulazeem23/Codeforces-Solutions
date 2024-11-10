#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    ll a[n], h[n];
    for(auto &t : a) cin >> t;
    for(auto &t : h) cin >> t;
    ll sum=0;
    int mx=0;
    for(int i=0, j=0; i < n; ++i){
        sum += a[i];
        while(i > j && sum > k){
            sum -= a[j++];
        }
        if(i>0 && h[i-1]%h[i]){
            sum=a[i];
            j=i;
        }
        bool valid = sum <= k;
        mx = max(mx, i-j+valid);
    }
    cout << mx << '\n';
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}