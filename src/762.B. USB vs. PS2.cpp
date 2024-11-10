#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    vector<pair<int,string>> v;
    while(n--){
        int x;
        string t;
        cin >> x >> t;
        v.push_back({x,t});
    }
    sort(v.begin(), v.end());
    ll mouses=0, cost=0;
    for(auto [pr, ty] : v){
        if(a && ty=="USB") mouses++, cost+=pr,a--;
        else if(b && ty=="PS/2") mouses++, cost+=pr,b--;
        else if(c) mouses++, cost+=pr,c--;
    }
    cout << mouses << " " << cost;
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