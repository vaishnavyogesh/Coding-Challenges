#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7;

int factorial(int n){
    int ans = 1;
    for(int i = n; i >= 2; i--){
        ans = (1LL* ans%mod * i);
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int val = ((factorial(2*n))/2);
        cout << val << endl;
    }
}