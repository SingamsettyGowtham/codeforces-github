#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, c=0; cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<s.size()-1; i++){
        if(s[i] != s[i+1]) c++;
    }
    cout << c+1;
    return 0;
}