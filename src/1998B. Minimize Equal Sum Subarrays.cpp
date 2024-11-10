#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int ar[n];
    for(auto &t : ar) cin >> t;
    for(int i=0; i < n-1; ++i){
        swap(ar[i], ar[i+1]);
    }
    for(auto t : ar) cout << t << " ";
    cout << "\n";
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