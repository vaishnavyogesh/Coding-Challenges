#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;


signed main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        int n;
        cin>>n;
        string s;
        cin>>s;
        int suffix[n], prefix[n];
        int prev = INT_MAX;
        for(int i = 0; i<n; i++){
            if(s[i] == '1'){
                prefix[i] = i;
                prev = i;
            }
            else prefix[i] = prev;
            
        }
        prev = INT_MAX;
        for(int i = n-1; i>=0; i--){
            if(s[i] == '1'){
                suffix[i] = i;
                prev = i;
            }
            else 
                suffix[i] = prev;
        }
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '0'){
                ans += min(abs(i - prefix[i]), (suffix[i] - i));
            }
        }
        cout<<ans<<endl;
    }
}