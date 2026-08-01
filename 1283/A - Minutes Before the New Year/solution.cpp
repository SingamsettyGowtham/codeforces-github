#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int hh, mm;
        cin >> hh >> mm;
        cout << (1440 - (60*hh) - mm) << endl;
    }
    
}