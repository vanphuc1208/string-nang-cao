#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int so=0,chu=0,db=0;
    for(char x:s) {
        if(isdigit(x)) so++;
        else if(isalpha(x)) chu++;
        else db++;
    }
    cout<<chu<<" "<<so<<" "<<db;


    return 0;
}
