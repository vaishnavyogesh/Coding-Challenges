#include <bits/stdc++.h>
using namespace std;
//function which generates all possible n pairs of balanced parentheses.
//open : count of the number of open parentheses used in generating the current string s.
//close : count of the number of closed parentheses used in generating the current string s.
//s : currently generated string/
//ans : a vector of strings to store all the valid parentheses.
void generateParenthesis(int n, int open, int close, string s, vector<string> &ans){
      //if the count of both open and close parentheses reaches n, it means we have generated a valid parentheses.
      //So, we add the currently generated string s to the final ans and return.
    if(ans.size() == n)return;
    if(open==n && close==n){
        ans.push_back(s);
        return;
    } 
      //At any index i in the generation of the string s, we can put an open parentheses only if its count until that time is less than n.
    if(open<n){
        generateParenthesis(n, open+1, close, s+"(", ans);
    }
  //At any index i in the generation of the string s, we can put a closed parentheses only if its count until that time is less than the count of open parentheses.
    if(close<open){
        generateParenthesis(n, open, close+1, s+")", ans);
    }
       
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> ans;
        generateParenthesis(n, 0, 0, "", ans);
        for(auto a : ans)cout<<a<<endl;
    }
    return 0;
}