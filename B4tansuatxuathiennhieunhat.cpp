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

int main() {
    string s;
    cin>>s;
    map<char,int> mp;
    for(char x:s) {
        mp[x]++;
    }
   char min,max;
   int min1=1e9,max1=0;
   for(auto it:mp) {
      if(it.second<=min1) {
        min1=it.second;
        min=it.first;
      }
      if(it.second>=max1) {
        max1=it.second;
        max=it.first;
      }
   }
   cout<<max<<" "<<max1<<endl;
   cout<<min<<" "<<min1<<endl;

    return 0;
}
