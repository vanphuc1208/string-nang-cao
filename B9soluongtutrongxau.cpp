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
   set<string> se;
   while(cin>>s) {
    se.insert(s);
   }
   cout<<se.size();
    return 0;
}
