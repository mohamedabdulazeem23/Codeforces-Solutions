#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
vector<int> adj[100005];
bool visited[1000005], cat[100005];
int dfs(int v, int c){
    if(visited[v] || c>m) return 0;
    visited[v] = true;
    ll ans=0;
    bool ok=true;
    for(auto t : adj[v]){
        if(!visited[t]){
            int cats = c+1;
            if(!cat[t]) cats=0;
            ans += dfs(t, cats);
            ok=false;
        }
    }
    return ans+ok;
}

void solve(){
    cin >> n >> m;
    for(int i=1; i <= n; ++i) cin >> cat[i];
    for(int i=0; i < n-1; ++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << dfs(1, cat[1]);
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