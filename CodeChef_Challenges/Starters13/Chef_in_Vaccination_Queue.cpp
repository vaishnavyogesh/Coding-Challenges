#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, p, x, y;
        cin>>n>>p>>x>>y;
        vector<int> v(n);
        for(auto &a : v)cin>>a;
        p--;
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(i == p){
                ans += y;
                break;
            }else if(v[i]){
                ans += y;
            }else{
                ans += x;
            }
        }
        cout<<ans<<endl;
        
    }
}