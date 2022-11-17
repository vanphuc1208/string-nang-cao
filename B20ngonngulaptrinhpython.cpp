#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
void lower(string &s) {
for (char &x:s) {
    x=tolower(x);
}
}
void upper(string &s) {
for (char &x:s) {
    x=toupper(x);
}
}
int main() {
   string s;
   cin>>s;
   string s1="python";
   int cnt=0;
   for(int i=0;i<s.length();i++) {
    if(cnt==6) {
        cout<<"YES";
        return 0;
    }
    if (s[i]==s1[cnt]) {
        cnt++;
    }
   }
   cout<<"NO";
   return 0;
}
