#include <bits/stdc++.h>
using namespace std;
int main(){
    int g, c, l;
    cin >> g >> c >> l;
    int mx = max(g, max(c, l));
    int mn = min(g, min(c, l));
    if (mx - mn >= 10) cout << "check again";
    else cout << "final " << (g + c + l - mx - mn); 
}