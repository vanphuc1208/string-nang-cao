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
bool checkdoixung(string s) {
    string m=s;
    reverse(s.begin(),s.end());
    return m==s;
}
bool cmp(string a,string b) {
     return a.size()<b.size();
}
int main() {
   string s;
   getline(cin,s);
   vector<string> v;
   map<string,int>mp;
   stringstream ss(s);
   string x;
   while(ss>>x) {
    if(checkdoixung(x)&&mp[x]==0){
        v.push_back(x);
        mp[x]=1;
    }
   }
   stable_sort(v.begin(),v.end(),cmp);
   for(auto x:v) cout<<x<<" ";
    return 0;
}
