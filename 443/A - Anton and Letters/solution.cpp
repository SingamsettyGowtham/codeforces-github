#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    getline(cin, s);
    set<char> c;
    for(int i=0; i<s.length(); i++){
        c.insert(s[i]);
    }
    c.erase('{');
    c.erase('}');
    c.erase(',');
    c.erase(' ');
    cout << c.size();
}