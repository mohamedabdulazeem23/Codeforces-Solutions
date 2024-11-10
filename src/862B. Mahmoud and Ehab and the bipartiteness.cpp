#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN =1e5;
vector<ll> adj[MAXN];
bool visited[MAXN];
ll c1,c2;

void dfs(int v, int c){
    if(c) c1++;
    else c2++;
    if(visited[v]) return;
    visited[v]= true;
    for(auto t: adj[v]){
        if(!visited[t])
            dfs(t,!c);
    }
}

void solve(){
    int n;
    cin >> n;
    for(int i=0; i < n-1; ++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0);
    cout << c1*c2 - (n-1);
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