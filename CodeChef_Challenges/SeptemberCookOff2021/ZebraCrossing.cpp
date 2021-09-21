#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> rightMostOne(n), rightMostZero(n), nextOne(n), nextZero(n);
        rightMostOne[n-1] = rightMostZero[n-1] = nextOne[n-1] = nextZero[n-1] = INT_MIN;
        int next_one = INT_MIN, next_zero = INT_MIN, right_zero = INT_MIN, right_one = INT_MIN;
        if(s[n-1] == '1')
            next_one = right_one = n-1;
        else next_zero = right_zero = n-1;
        for(int i = n-2; i>=0; i--){
            if(s[i] == '1'){
                rightMostOne[i] = right_one;
                nextOne[i] = next_one;
                rightMostZero[i] = right_zero;
                if(right_one == INT_MIN)right_one = i;
                next_one = i;
            }else{
                rightMostOne[i] = right_one;
                nextOne[i] = next_one;
                rightMostZero[i] = right_zero;
                nextZero[i] = next_zero;
                if(right_zero == INT_MIN)right_zero = i;
                next_zero = i;
            }
        }
        int i = 0;
        bool valid = true;
        while(k){
            if(i == INT_MIN){
                valid = false;
                break;
            }
            if(k == 1){
                if(s[i] == '0')
                    i = rightMostOne[i];
                else i = rightMostZero[i];
            }else{
                if(s[i] == '0')
                    i = nextOne[i];
                else i = nextZero[i];
            }
            k--;
        }
        cout<<(valid  and i != INT_MIN ? (i + 1) : -1)<<endl;
        
    }
}