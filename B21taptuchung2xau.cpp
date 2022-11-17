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
   map<string,int> mp1,mp2;
   stringstream ss1(s1);
   stringstream ss2(s2);
   string x;
   while(ss1>>x) {
    lower(x);
    mp1[x]=1;
   }
   while(ss2>>x) {
    lower(x);
    mp2[x]=1;
   }
   for(auto it:mp1) {
    if(mp2[it.first]!=0) cout<<it.first<<" ";
   }
   
   return 0;
}
