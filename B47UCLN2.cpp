#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
bool check(string s) {
    int sum=0;
    for(char x:s) {
        sum+=x-'0';
    }
    if(sum==9) return 1;
    string tmp=to_string(sum);
    sum=0;
    for(char x:tmp) {
    sum+=x-'0';
    }
    return sum==9;
}
int main()
{
    string s;
    cin>>s;
    if(check(s)) cout<<"YES";
    else cout<<"NO";
}