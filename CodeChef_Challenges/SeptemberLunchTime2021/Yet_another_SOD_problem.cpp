#include<bits/stdc++.h>
using namespace std;

// 3 9 -> 9 - 2 + 1 8/3

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l, r;
        cin>>l>>r;
        long long ans = r/3 - l/3 + (l%3 == 0);
        cout<<ans<<endl;
        
    }
}