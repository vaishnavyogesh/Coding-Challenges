#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; string s, p;
        cin>>n>>s>>p;
        if(s == p){
            cout<<"YES\n";
            continue;
        }
        int count[2] = {0};
        for(auto a : p)
            count[a - '0']++;
        if(count[0] and count[1])cout<<"YES\n";
        else cout<<"NO\n";
    }
}