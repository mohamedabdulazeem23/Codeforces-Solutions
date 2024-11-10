#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int ar[n], cnt[n+1]={0}, ans=0;
    for(auto &t : ar) {
        cin >> t;
        if(t <= n) cnt[t]++;
    }
    int mod[n+1] = {0};
    for(int i=1; i <= n; ++i){
        for(int j=0; j <= n; j+=i){
            mod[j] += cnt[i];
            if(j) ans = max(ans, mod[j]);
        }
    }
    cout << ans << '\n';
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