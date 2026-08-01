#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        string s1;
        for(int i=0; i<s.length()-2; i++){
            s1 += s[i];
        }
        cout << s1+'i' << endl;
    }
}