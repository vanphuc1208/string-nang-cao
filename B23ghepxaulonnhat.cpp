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
bool cmp(string a , string b)
{
    return a+b>b+a;
}
int main() {
    int n; cin>>n;
   string s;
   vector<string> v;
   for(int i=0;i<n;i++) {
    cin>>s;
    v.push_back(s);
   }
   sort(v.begin(), v.end(),cmp);
   for(auto it:v) cout<<it;

   return 0;
}
