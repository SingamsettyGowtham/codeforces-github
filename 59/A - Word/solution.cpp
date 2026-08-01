#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int upper=0;
    int lower=0;
    for(char c : s){
        if(65 <= ((int) c) && ((int) c) <= 90) upper++;
        else lower++;
    }
    for(char x : s){
        if(upper <= lower) x = tolower(x);
        else x = toupper(x);
        cout << x;
    } 
}