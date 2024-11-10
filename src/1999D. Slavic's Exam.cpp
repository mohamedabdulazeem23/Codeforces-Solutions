#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s, t;
    cin >> s >> t;
    int l=0, r=0;
    while(l < s.size() && r < t.size()){
        if(s[l]==t[r]) r++;
        if(s[l] == '?'){
            s[l] = t[r++];
        }
        l++;
    }
    if(r != t.size()){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(char c : s){
        cout << (c=='?' ? 'a' : c);
    }
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