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
bool check(string s) {
    string m=s;
    reverse(s.begin(),s.end());
    return m==s;
}
int main() {
   string s;
   cin>>s;
   if(check(s)) cout<<"YES";
   else cout<<"NO";
    return 0;
}
