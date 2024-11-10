#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin >> s;
    int fq[3] = {0};
    int j=0, mn=1e9;
    for(int i=0; i < s.size(); ++i){
        fq[s[i]-'1']++;
        while(fq[s[j]-'1']>1){
            fq[s[j]-'1']--;
            j++;
        }
        if(fq[0] && fq[1] && fq[2]) mn = min(mn, i-j+1);
    }
    cout << (mn==1e9?0:mn) << '\n';
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