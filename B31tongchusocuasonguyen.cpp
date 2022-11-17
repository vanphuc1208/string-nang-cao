#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool check(string s) {
    ll res=0;
    for(int i=s.length()-1;i>=0;i--) {
        if(s[i]=='1') {
            res+=pow(2,s.length()-1-i);
            res%=5;
        }
    }

 if(res==0) return true;
 return false;
}

int main(){ 
   string s;
   cin>>s;
   if(check(s)) cout<<"YES";
   else cout<<"NO";
}
