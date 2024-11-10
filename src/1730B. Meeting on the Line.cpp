#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double f(double m, int pos[], int time[], int n){
    double ret = 0;
    for(int i=0; i < n; ++i){
        ret = max(ret,(abs(m-pos[i]) + time[i]));
    }
    return ret;
}

void solve(){
    int n; cin >> n;
    int pos[n], time[n];
    for(auto &t : pos) cin >> t;
    for(auto &t : time) cin >> t;
    double l=-1, r=1e8+10;
    for(int i=0; i < 200; ++i){
        double m1 = l + (r-l)/3, m2 = r - (r-l)/3;
        if(f(m1,pos,time,n) > f(m2,pos,time,n)) l = m1;
        else r = m2;
    }
    cout << setprecision(10) << l << "\n";
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
