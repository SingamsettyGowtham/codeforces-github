#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    set<char> v;
    for(int i=0; i<s.length(); i++) v.insert(s[i]);
    int c = v.size();
    c % 2 != 0 ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
}