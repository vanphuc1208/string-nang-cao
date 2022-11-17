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
bool cmp(string a , string b)
{
    return a+b>b+a;
}
void Min(int n , int s)
{
    string res = "";
    --n , --s;
    for(int i = 0 ; i < n;i++)
    {
        if(s >= 9)
        {
            res += "9";
            s -= 9;
        }
        else
        {
            res = to_string(s) + res;
            s = 0;
        }
    }
    s += 1;
    res = to_string(s) + res;
    cout << res<<endl;
}
int main() {
    int m,s;
    cin>>m>>s;
   if(s>9*m) {
    cout<<"NOT FOUND";
    return 0;
   }
   string max;
   int cnt=0;
   int cnt1=0;
   while(cnt<s) {
    cnt+=9;
    max+="9";
    cnt1++;
   }
   if(cnt>s){
    max.pop_back();
    max+=to_string(9-(cnt-s));
   }

   for(int i=cnt1;i<m;i++) {
      max+="0";
   }

   Min(m,s);
   cout<<max;
   return 0;
}
