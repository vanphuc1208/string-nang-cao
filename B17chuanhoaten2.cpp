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
   string s1;
   getline(cin,s1);
   stringstream ss(s1);
   string x;
   string res="";
   while(ss>>x) {
    lower(x);
    x[0]=toupper(x[0]);
    res+=x+" ";
   }
   res.pop_back();
   for(int i=0;i<x.length();i++) {
    res.pop_back();
   }
   res.pop_back();// xoa luon dau cach
   string res2=res;
   upper(x);
   res+=", "+x;
   res2=x +", "+res2;
   cout<<res<<endl;
   cout<<res2;
}
