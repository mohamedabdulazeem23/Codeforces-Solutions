#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = int(1e9+7);
void solve(){
    int n, k;
    cin >> n >> k;
    ll ans=1;
    for(int i=0; i < k; ++i){
        ans *= n;
        ans %= MOD;
    }
    cout << ans << "\n";
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