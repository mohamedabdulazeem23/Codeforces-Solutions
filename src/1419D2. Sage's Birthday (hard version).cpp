#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &t:v) cin >>t;
    sort(v.begin(),v.end());
    vector<ll> ans(n);
    int l=0,r=n/2;
    for(int i=0; i < n; ++i){
        if(i%2){
            ans[i] = v[l++];
        }
        else{
            ans[i] = v[r++];
        }
    }
    ll nBalls=0;
    for(int i=1; i < n-1; ++i){
        nBalls+=(ans[i] < ans[i+1] && ans[i] < ans[i-1]);
    }
    cout << nBalls << "\n";
    for(int i=0; i < n; ++i) cout << ans[i] << " ";
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
}