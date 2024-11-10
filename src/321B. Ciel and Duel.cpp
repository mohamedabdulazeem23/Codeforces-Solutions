#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll c1(vector<int>& a, vector<int>& d, vector<int> c){
    sort(c.begin(),c.end());
    int ix=c.size()-1, akls=0, dkls=0;
    ll dmg=0;
    for(auto e : a){
        if(ix >= 0 && c[ix] >= e){
            dmg += c[ix]-e;
            c.erase(c.begin()+ix);
            akls++;
        }
        ix--;
    }
    for(auto e : d){
        auto it = upper_bound(c.begin(), c.end(),e);
        if(it != c.end() && akls == a.size()){
            dkls++;
            c.erase(it);
        }
    }
    if(dkls==d.size() && akls==a.size()){
        for(auto e : c) dmg += e;
    }
    return dmg;
}
ll c2(vector<int>& a, vector<int>& d, vector<int> c){
    sort(c.begin(),c.end());
    int akls=0, dkls=0;
    ll dmg=0;
    for(auto e : d){
        auto it = upper_bound(c.begin(), c.end(),e);
        if(it != c.end()){
            c.erase(it);
            dkls++;
        }
    }
    for(auto e : a){
        auto it = upper_bound(c.begin(),c.end(),e);
        if(it != c.end()){
            dmg += *it-e;
            akls++;
            c.erase(it);
        }
    }
    if(dkls==d.size() && akls==a.size()){
        for(auto e : c) dmg += e;
    }
    return dmg;
}

void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a,d, c(m);
    for(int i=0; i < n; ++i){
        string s;
        int x;
        cin >> s >> x;
        if(s=="ATK") a.push_back(x);
        else d.push_back(x);
    }
    for(int i=0; i < m; ++i) cin >> c[i];
    sort(a.begin(), a.end());
    sort(d.begin(),d.end());
    cout << max(c1(a,d,c),c2(a,d,c));
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