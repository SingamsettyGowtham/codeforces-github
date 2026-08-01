#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        vector<char> c = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
        char ch; cin >> ch;
        bool found = false;
        for(char x : c){
            if(x == ch) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES
" : "NO
");
    }
}