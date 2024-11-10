#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v;
bool fun(int i, int n, int cur){
    if(i==n){
        return (cur%360==0);
    }
    return fun(i+1, n, cur+v[i]) || fun(i+1, n, cur-v[i]);
}

void solve(){
    int n;
    cin >> n;
    v.resize(n);
    for(auto &t : v) cin >> t;
    cout << (fun(0, n, 0) ? "YES" : "NO");
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