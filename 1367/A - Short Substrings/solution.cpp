#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        string a = s.substr(0, 2);
        for(int j=3; j<s.size(); j+=2){
            a+=s[j];
        }
        cout << a << endl;
    }
}