#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    string s;
    cin >> s;
    string res = ""; // res = "" + s[0]
    res += s[0]; 
    int max_len = 1;
    string ans = res;
    s += s[s.size()-1];
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i - 1]){
            res += s[i];
        }
        else{
            if(res.size() > max_len){
                max_len = res.size();
                ans = res;
            }
            else if(res.size() == max_len){
                if(res > ans){
                    ans = res;
                }
            }
            res = "";
            res += s[i];
        }
    }
    cout << ans << endl;
}
