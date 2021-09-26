#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = 0;
        int n = s.size();
        int ans = 0;
        while(i < n and s[i] == '1')i++;
        char prev = 'a';
        while(i < n){
            if(s[i] != prev)ans++;
            prev = s[i];
            i++;
        }
        cout<<ans<<endl;
        
    }
}