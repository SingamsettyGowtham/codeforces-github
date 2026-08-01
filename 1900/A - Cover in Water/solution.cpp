#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int k = 0; bool three_cons_dot = false;
        for(int i=0; i<n; i++){
            if(s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.'){
                three_cons_dot = true;
                break;
                
            }  
            if(s[i] == '.') k++;
        }
        if(three_cons_dot){
            cout << 2 <<endl;
        }
        else{
            cout << k << endl;
        }
    }   
}