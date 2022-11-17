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
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   for(int i=0;i<=s1.length()-s2.length();i++) {
      if(s1[i]==s2[0]) {
         int j;
        for( j=0;j<s2.length();j++) {
            if(s2[j]!=s1[i+j]) break;
        }
        if(j==s2.length()) {
            cout<<"YES";
            return 0;
      }
      }
   }
   
cout<<"NO";
   
}
