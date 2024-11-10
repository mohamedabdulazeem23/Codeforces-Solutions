#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    int ar[n];
    for(auto &t : ar) cin >> t;
    vector<vector<int>> v;
    for(int i=0; i < n; ++i){
        int l=-1, r=v.size();
        while(r-l > 1){
            int m=(r-l)/2+l;
            if(v[m].back() < ar[i]) r=m;
            else l=m;
        }
        if(r==v.size() || v.empty()) v.push_back({ar[i]});
        else v[r].push_back(ar[i]);
    }
    for(auto vec : v){
        for(auto t : vec) cout << t << ' ';
        cout << '\n';
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