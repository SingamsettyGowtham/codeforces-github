#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    string s1 = "abc";
    while(t--){
        string s; cin >> s;
        int c = 0;
        for(int i=0; i<3; i++){
            if(s[i] != s1[i]) c++;
        }
        cout << (c <= 2 ? "Yes
" : "No
");
    }
}