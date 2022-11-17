#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
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
    if(mp[tk]==0) {
        mp[tk]++;
    }
    else {
        mp[tk]++;
        tk+=to_string(mp[tk]);
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
   for(int i=1;i<=n;i++) {
    getline(cin,s);
    createemail(s);
   }
}
