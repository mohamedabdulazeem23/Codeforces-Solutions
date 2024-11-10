#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for(auto &t : a) cin >> t;
    for(auto &t : b) cin >> t;
    sort(a, a+n);
    for(auto t : b){
        auto it = upper_bound(a,a+n,t);
        cout << min((int)(it-a),n) << " ";
    }
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
