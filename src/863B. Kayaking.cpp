#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int ar[n*2];
    for(auto &t : ar) cin >> t;
    sort(ar,ar+2*n);
    int ans=1e9;
    for(int i=0; i < 2*n; ++i){
        for(int j=0; j < 2*n; ++j){
            int inst=0, prev=-1;
            for(int k=0; k < 2*n; ++k){
                if(k==i || k==j) continue;
                if(prev==-1) prev = ar[k];
                else{
                    inst += ar[k]-prev;
                    prev = -1;
                }
            }
            ans = min(ans, inst);
        }
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