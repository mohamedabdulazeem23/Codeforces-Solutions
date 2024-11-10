#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    int ar[n];
    for(auto &t : ar) cin >> t;
    ll px[n+1];
    px[0] = 0;
    for(int i=1; i <= n; ++i){
        px[i] = px[i-1] + ar[i-1];
    }
    sort(ar,ar+n);
    ll px2[n+1];
    px2[0] = 0;
    for(int i=1; i <= n; ++i){
        px2[i] = px2[i-1] + ar[i-1];
    }
    int q; cin >> q;
    while(q--){
        int x,l,r;
        cin >> x >> l >> r;
        if(x==1) cout << px[r]-px[l-1] << "\n";
        else cout << px2[r]-px2[l-1] << "\n";
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