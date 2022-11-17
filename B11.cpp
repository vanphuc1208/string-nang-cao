#include <bits/stdc++.h>
using namespace std;
bool cmp1(string a, string b ) {
    return a<b;
}
bool cmp2(string a, string b ) {
    if(a.size()!=b.size()) return a.size()<b.size();
    return a<b;
}
int main() {
    string s;
    vector<string> v;
    while(cin>>s) {
        v.push_back(s);
    }
   sort(v.begin(),v.end(),cmp1);
   for(auto it:v) cout<<it<<" ";
   cout<<endl;
   sort(v.begin(),v.end(),cmp2);
    for(auto it:v) cout<<it<<" ";


    return 0;
}
