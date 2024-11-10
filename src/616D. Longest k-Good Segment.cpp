#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    for(auto &t : ar) cin >> t;
    map<int,int> mp;
    int ans = 0, l,r;
    for(int i=0, j=0; i < n; ++i){
        mp[ar[i]]++;
        while(mp.size() > k){
            mp[ar[j]]--;
            if(mp[ar[j]]==0) mp.erase(ar[j]);
            j++;
        }
        if(i-j+1 > ans){
            ans = i-j+1;
            l=j+1;
            r=i+1;
        }
    }
    cout << l << " " << r;
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