#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;
    if(k&1){
        cout << x << " " << y << "\n";
        k--;
    }
    int s=1;
    while(k){
        cout << x-s << " " << y << "\n";
        cout << x+s << " " << y << "\n";
        k-=2;
        ++s;
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
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}