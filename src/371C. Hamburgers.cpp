#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string ss;
int b,s,c, pb, ps, pc;
ll rup;

bool f(ll m){
    ll B=0, S=0, C=0;
    for(auto ch : ss){
        if(ch=='B') B++;
        else if(ch=='S') S++;
        else C++;
    }
    return ((pb*max(0ll, B*m-b))+(ps*max(0ll, S*m-s))+(pc*max(0ll, C*m-c))) <= rup;
}

void solve(){
    cin >> ss >> b >> s >> c >> pb >> ps >> pc >> rup;
    ll l=0, r=1e13;
    while(r-l > 1){
        ll m = (r-l)/2+l;
        if(f(m)) l=m;
        else r=m;
    }
    cout << l;
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