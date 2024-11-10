#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int px[200005], a[200005];
    for(int i=1; i < 200005; ++i){
        int c=0;
        int x=i;
        while(x) x/=3, c++;
        px[i] += px[i-1] + c;
        a[i]=c;
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << px[r]-px[l-1] + a[l] << "\n";
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