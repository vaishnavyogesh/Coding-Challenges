#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int> d;
        for(int i = 0; i<n; i++){
            int a; cin>>a;
            if(d.empty())d.push_back(a);
            else if(a <= d.front())d.push_front(a);
            else d.push_back(a);
        }
        
        for(auto a : d)cout<<a<<' ';
        cout<<endl;
    }
}