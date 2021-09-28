#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


signed main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &a : v)cin >> a;
        vector<int> t = v;
        sort(t.begin(), t.end());
        bool is_sorted = true;
        for(int i = 0; i<n; i++)
            if(v[i] != t[i]){
                is_sorted = false;
                break;
            }
        
        if(is_sorted){
            cout<<0<<endl;
            continue;
        }
        vector<string> ans;
        for(int i = 0; i<n; i++){
            auto it = v.begin() + i;
            int j;
            for(j = i; j<n; j++){
                if(v[j] == t[i])
                    break;
            }
            v.erase(v.begin() + j);
            v.insert(it, t[i]);
            if(i != j){
                ans.push_back(to_string(i + 1) + " " + to_string(j + 1) + " " + to_string(j - i));
            }
        }
        cout<<ans.size()<<endl;
        for(auto s : ans){
            cout<<s<<endl;
        }
    }
    
}