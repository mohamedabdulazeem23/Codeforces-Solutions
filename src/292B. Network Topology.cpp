#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> adj[100005];
void solve(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int deg=0, ones=0, tws=0;
    for(auto t : adj) {
        deg = max(deg, (int) t.size());
        ones += t.size() == 1;
        tws += t.size()==2;
    }
    if(deg==n-1 && ones==n-1){
        cout << "star topology";
    }
    else if(tws == n){
        cout << "ring topology";
    }
    else if(ones==2 && tws == n-2){
        cout << "bus topology";
    }
    else cout << "unknown topology";
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