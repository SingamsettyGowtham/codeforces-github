#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> v;
    for(int i=0; i<s.length(); i++){
        if(s[i] != '+') v.push_back(s[i]- '0'); 
    }
    sort(v.begin(), v.end());
    cout << v[0];
    for(auto it=v.begin()+1; it!=v.end(); it++) cout << '+' << *it;
    return 0;    
}