#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    int fq[101]={0};
    for(int i=0; i < n; ++i){
        int x; cin >> x;
        fq[x]++;
    }
    cout << n-*max_element(fq,fq+101) << "\n";
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