#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

//solved after the contest, but already had the intuition and the implementation in the contest which gave tle.
bool isPrime(int n){
    if(n <= 2)return n == 2;
    if(n % 2 == 0)return false;
    for(int i = 3; i*i <= n; i += 2){
        if(n % i == 0)return false;
    }
    return true;
}

bool valid(int a, int b){
    if(isPrime(a)){
        return !(b % a);
    }
    for(int i = 2; i*i <= a; i+=1 + (i > 2)){
        if(a % i == 0){
            if(b%i)return false;
            while(a%i == 0)a /= i;
        }
    }
    if(a != 1)return !(b % a);
    return true;
    
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a == 1){
            cout<<"YES"<<endl;
            continue;
        }
        if(b == 1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<(valid(a, b) ? "YES":"NO")<<endl;
    }
    
}