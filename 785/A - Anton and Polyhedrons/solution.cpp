#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; 
    cin >> n;
    int total = 0;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
        if(s[i] == "Tetrahedron") total += 4;
        else if(s[i] == "Cube") total += 6;
        else if(s[i] == "Octahedron") total += 8;
        else if(s[i] == "Dodecahedron") total += 12;
        else total += 20;
    }
    cout << total;
}