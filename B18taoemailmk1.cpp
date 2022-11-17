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
void createemail(string s) {
    string tk="";
    string mk="";
    string x;
    stringstream ss(s);
    vector<string> v;
    while(ss>>x) {
        lower(x);
        v.push_back(x);
    }
    // xu ly mk
    for(int i=0;i<x.length();i++) {
        if(x[i]=='/') x[i]=' ';
    }
    stringstream ss1(x);
    string tmp;
    while(ss1>>tmp) {
        if(tmp[0]=='0') tmp.erase(0,1);
        mk+=tmp;
    }
    // xu ly tk
    tk+=v[v.size()-2];
    for(int i=0;i<v.size()-2;i++) {
       tk+=v[i][0];
    }
    tk+="@xyz.edu.vn";
    cout<<tk<<endl;
    cout<<mk<<endl; 
}
int main() {
   int n;
   cin>>n;
   cin.ignore();
   string s;
   for(int i=0;i<n;i++) {
    getline(cin,s);
    createemail(s);
   }
}
