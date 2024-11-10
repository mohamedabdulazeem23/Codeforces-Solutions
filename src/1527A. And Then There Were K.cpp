#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int ans=1;
    while((ans<<1) <= n) ans<<=1;
    cout << ans-1 << '\n';
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