#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int a =0, b =0;
    for(char c : s){
        if(c =='A') a++;
        else b++;
    }
    if(a > b) cout << "Anton";
    else if(b > a) cout << "Danik";
    else cout << "Friendship";
}