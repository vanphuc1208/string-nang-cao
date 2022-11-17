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
   cin>>s;
   lower(s);
   int cnt[256]={0};
   for(char x:s) {
    cnt[x]=1;
   }
   for(int i=97;i<=122;i++) {
    if (cnt[i]!=1) {
        cout<<"NO";
        return 0;
    }
   }
   cout<<"YES";
    return 0;
}
