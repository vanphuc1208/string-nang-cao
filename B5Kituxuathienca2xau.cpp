#include <bits/stdc++.h>
using namespace std;
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
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   map<char,int> mp1,mp2,mp;
   for(auto x:s1) {
      mp1[x]=1;
      mp[x]=1;
   }
   for(auto x:s2) {
      mp2[x]=1;
      mp[x]=1;
   }
   for(auto it:mp1) {
    if (mp2[it.first]==1) cout<<it.first;
   }
   cout<<endl;
    for(auto it:mp) {
      cout<<it.first;
   }
    return 0;
}
