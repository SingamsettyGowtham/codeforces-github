#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string c;
    if(s.length() == t.length()){
        for(int i=s.length()-1; i>=0; i--){
            c += s[i];
        }
        if(t == c){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }  
}