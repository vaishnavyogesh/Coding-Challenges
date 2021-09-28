#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


signed main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int sum1 = 0, sum2 = 0;
        for(auto a : s){
            if(a == 'B')
                sum1++;
            else sum2++;
        }
        cout<<(sum1 == sum2 ? "YES" : "NO")<<endl;
    }
    
}