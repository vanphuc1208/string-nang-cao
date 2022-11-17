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

int main() {
   string s;
   getline(cin,s);
   set<string> se;
   vector<string> v;
   stringstream ss(s);
   string x;
   while(ss>>x) {
    se.insert(x);
    v.push_back(x);
   }
   for(auto x:se) cout<<x<<" ";
   cout<<endl;
   for(auto x:v) {
     if(se.count(x)==1) {
        cout<<x<<" ";
        se.erase(x);
     }
   }
    return 0;
}
