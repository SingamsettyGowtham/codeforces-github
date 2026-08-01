#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    
    string s1;
    
    for(int i=0; i<s.length(); i++){
        if(65 >= s[i] <= 90){
            s[i] = tolower(s[i]);
        }
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'y'){
            continue;
        }
        else{
            s1 += '.';
            s1 += s[i];
        }
        
    }
    cout << s1;
}