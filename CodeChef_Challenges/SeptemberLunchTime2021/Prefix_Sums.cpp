#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n/2) & 1){
            cout<<"NO"<<endl;
            continue;
        }
        const int val = n/2;
        int first[val];
        int second[val];
        int lo = 1;
        int hi = n;
        int i1 = 0, i2 = 0;
        int j1 = n/2-1, j2 = n/2-1;
        while(lo < hi){
            first[i1++] = lo++;
            first[j1--] = hi--;
            second[i2++] = lo++;
            second[j2--] = hi--;
        }
        cout<<"YES"<<endl;
        for(auto a : first)cout<<a<<' ';
        cout<<endl;
        for(auto a : second)cout<<a<<' ';
        cout<<endl;
    }
}