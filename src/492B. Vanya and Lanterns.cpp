#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,l;
    cin >> n >> l;
    int ar[n];
    for(auto &t : ar) cin >> t;
    sort(ar,ar+n);
    double ans = 0;
    for(int i=0; i < n-1; ++i){
        ans = max(ans, (double)(ar[i+1]-ar[i]));
    }
    cout << setprecision(15) <<  max({ans/2, (double)ar[0], (double)(l-ar[n-1])});
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
