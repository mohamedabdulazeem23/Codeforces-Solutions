#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<double> pos, v;
double f(double m){
    double time=0;
    for(int i=0; i < pos.size(); ++i){
        time = max(abs(pos[i]-m)/v[i], time);
    }
    return time;
}

void solve(){
    cin >> n;
    pos.resize(n);
    v.resize(n);
    for(auto &t : pos) cin >> t;
    for(auto &t : v) cin >> t;
    double l=0, r=50;
    for(int i=0; i < 200; ++i){
        double m1 = (r-l)/3 + l, m2 = r - (r-l)/3;
        if(f(m1) < f(m2)) r=m2;
        else l=m1;
    }
    cout << setprecision(15) << f(l);
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
