
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>evenOdd(2, false);
        for(auto &a : v){
            cin>>a;
            evenOdd[a & 1]++;
        }
        
        if(evenOdd[0] and evenOdd[1]){
            for(auto a : v)
                if(a & 1)cout<<a<<' ';
            for(auto a : v)
                if(a % 2 == 0)cout<<a<<' ';
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}