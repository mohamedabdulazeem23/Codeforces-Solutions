#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int ar[n];
    for(auto &t : ar) cin >> t;
    int m; cin >> m;
    while(m--){
        string s;
        cin >> s;
        if(s.size() != n){
            cout << "NO\n";
            continue;
        }
        bool ok= true;
        map<char,int> mp;
        map<int,char> mp2;
        for(int i=0; i < n; ++i){
            if(mp.count(s[i])==0){
                if(mp2.count(ar[i])==0){
                    mp[s[i]] = ar[i];
                    mp2[ar[i]] = s[i];
                }
                else ok=false;
            }
            else{
                if(mp[s[i]] != ar[i]){
                    ok=false;
                }
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
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