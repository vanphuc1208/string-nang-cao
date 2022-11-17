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
    getline(cin,s);
    upper(s);
    cout<<s<<endl;
    lower(s);
    cout<<s<<endl;

    return 0;
}
