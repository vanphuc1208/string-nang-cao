#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool cmp(string a, string b) {
    if(a.size()!=b.size()) return a.size()<b.size();
    return a<b;
}

int main(){
    string s;
    cin >> s;
    for( char &x:s) {
        if(!isdigit(x)) x=' ';
    }
    string x;
    stringstream ss(s);
    vector<string> v;
    while(ss>>x) {
     while(x[0]=='0' && x.size()>1) x.erase(0,1);
     v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    cout<<v[v.size()-1];
}
