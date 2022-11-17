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
   if(s2[2]!='/') s2='0'+s2;
   if(s2[5]!='/') s2.insert(3,"0");
   lower(s1);
   stringstream ss(s1);
   string x;
   string res="";
   while(ss>>x) {
    lower(x);
    x[0]=toupper(x[0]);
    res+=x+" ";
   }
   res.pop_back();
   cout<<res<<endl;
   cout<<s2;
   
}
