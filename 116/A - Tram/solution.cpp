#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int lp = 0, cp = 0;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        lp = b-a+lp;
        if(lp > cp) cp = lp;
    }
    cout << cp;
}