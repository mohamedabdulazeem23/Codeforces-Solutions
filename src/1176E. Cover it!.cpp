#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(int v, int c, int color[], vector<int> adj[]){
    if(color[v] != -1) return;
    color[v] = c;
    for(auto t : adj[v]){
        if(color[t] == -1) dfs(t, !c, color, adj);
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];
    int color[n+1];
    for(int i=0; i <= n; ++i) color[i] = -1;
    while(m--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0, color, adj);
    int c1=0, c2=0;
    for(int i=1; i <= n; ++i){
        c1 += (color[i]==0);
        c2 += (color[i]==1);
    }
    if(c1 < c2){
        cout << c1 << "\n";
        for(int i=1; i <= n; ++i){
            if(color[i] == 0) cout << i << " ";
        }
    }
    else{
        cout << c2 << "\n";
        for(int i=1; i <= n; ++i){
            if(color[i] == 1) cout << i << " ";
        }
    }
    cout << '\n';
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