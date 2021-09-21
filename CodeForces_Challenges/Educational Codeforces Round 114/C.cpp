#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> h(n);
    int sum = 0;
    for(auto &a : h)cin>>a, sum += a + 0LL;
    int m;
    cin>>m;
    vector<pair<int, int>> d(m);
    for(auto &a : d)cin>>a.first>>a.second;
    sort(h.begin(), h.end());
    for(int i = 0; i<m; i++){
        int def = d[i].first, att = d[i].second;
        int ind = lower_bound(h.begin(), h.end(), def) - h.begin();
        int coin1 = 0, coin2 = 0;
        int h_def1 = h[ind - (ind == n)], h_def2 = h[ind  - 1 + (ind == 0)];
        int rem1 = sum - h_def1, rem2 = sum - h_def2;
        if(h_def1 < def)coin1 += def - h_def1;
        if(rem1 < att)coin1 += att - rem1;
        if(h_def2 < def)coin2 += def - h_def2;
        if(rem2 < att)coin2 += att - rem2;
        cout<<min(coin1, coin2)<<endl;
    }
    
}