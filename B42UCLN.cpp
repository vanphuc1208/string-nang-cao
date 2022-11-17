#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

string gcd(string s,ll k)
{  while(k){
   ll sum=0;
   for(int i=0;i<s.length();i++){
    sum=sum *10+(s[i]-'0');
    sum%=k;
   }
   s=to_string(k);
   k=sum;
}
return s;
}


int main()
{
    string s ; cin >> s;
    ll k; cin>>k;
   cout<<gcd(s,k);
    return 0;
}