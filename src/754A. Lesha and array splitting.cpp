#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    int ar[n], nz=0;
    for(auto &t : ar) cin >> t, nz+=!t;
    if(nz==n) return void(cout<<"NO\n");
    cout << "YES\n";
    bool k=true;
    vector<pair<int,int>> ans;
    pair<int,int> p;
    ll sum=0;
    for(int i=0; i < n; ++i){
        if(k){
            p.first=i+1;
            k=false;
            sum=0;
        }
        sum+=ar[i];
        if(!k && sum && i<n-1 && ar[i+1]){
            p.second=i+1;
            k=true;
            ans.push_back(p);
        }
    }
    ans.push_back({p.first, n});
    cout << ans.size() << "\n";
    for(auto [x,y] : ans) cout << x << " " << y << "\n";
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