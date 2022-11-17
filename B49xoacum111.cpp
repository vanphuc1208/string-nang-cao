#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s;
    cin>>s;
    while(s.find("111")!=string::npos) {
        int idx=s.find("111");
        s.erase(idx,3);
    }
    if(s.length()==0) cout<<"EMPTY";
    else cout<<s;
}