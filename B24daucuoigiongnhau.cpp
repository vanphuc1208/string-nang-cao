#include <bits/stdc++.h>
using namespace std;
using ll=long long;
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
bool cmp(string a , string b)
{
    return a+b>b+a;
}
int main() {
   string s;
   cin>>s;
   map<char,int>mp;
   ll res=0;
   for(char x:s) mp[x]++;
   for(auto it:mp) {
    res+= 1ll* (it.second)*(it.second-1)/2;
   }
   res+=s.length();
   cout<<res;

   return 0;
}
