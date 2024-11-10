#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int ar[n];
    for(auto &t : ar) cin >> t;
    int ans=0;
    for(int i=0; i < (1<<n); ++i){
        int mn=1e9, mx=0, cnt=0;
        ll sum=0;
        for(int j=0; j < n; ++j){
            if((i & (1<<j))) {
                cnt++;
                sum += ar[j];
                mn = min(mn, ar[j]);
                mx = max(mx, ar[j]);
            }
        }
        ans += (sum <= r && sum >= l && mx-mn >= x && cnt >= 2);
    }
    cout << ans;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}