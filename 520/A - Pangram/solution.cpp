#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n; cin >> n;
    string s; cin >> s;
    
    for(int i=0; i<n; i++){
        s[i] = tolower(s[i]);
    }
    
    set<char> c(s.begin(), s.end());
    
    if(c.size() == 26) cout << "YES";
    else cout << "NO";
    
}