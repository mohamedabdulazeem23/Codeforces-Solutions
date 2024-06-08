#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll k,n,a,b;
bool f(ll m){
    return (m*a + (n-m)*b < k);
}

void solve(){
    cin >> k >> n >> a >> b;
    ll l=-1, r=n+1;
    while(l+1<r){
        ll m = (r-l)/2+l;
        if(f(m)) l=m;
        else r=m;
    }
    cout << l << "\n";
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
