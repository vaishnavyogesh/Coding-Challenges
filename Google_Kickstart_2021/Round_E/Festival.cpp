//Earned Partial Points
#include<bits/stdc++.h>

#define endl '\n'
using namespace std;


signed main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        int d, n, k;
        cin>>d>>n>>k;
        vector<pair<int, pair<int, int>>> data;
        priority_queue<int> v[d];
        for(int i = 0; i<n; i++){
            int h, s, e;
            cin>>h>>s>>e;
            data.push_back({h, {s, e}});
        }
        sort(data.begin(), data.end(),[&](pair<int, pair<int, int>> p1, pair<int, pair<int, int>>p2){
            return p1.first > p2.first;
        });
        for(int i = 0; i<n; i++){
            auto it = data[i];
            for(int j = it.second.first; j <= it.second.second; j++){
                if(v[j-1].size() < k)
                    v[j-1].push(it.first);
            }
        }
        int ans = INT_MIN;
        for(int i = 0; i<d; i++){
            auto it = v[i];
            int cur_max = 0;
            for(int i = 0; i<k; i++){
                if(it.empty())
                    break;
                cur_max += it.top();
                it.pop();
            }
            ans = max(cur_max, ans);
        }
        cout<<ans<<endl;
        
    }
}