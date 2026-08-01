#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if(a == b) cout << sum - (2*a) << endl;
        else if(b == c) cout << sum - (2*b) << endl;
        else cout << sum - (2*c) << endl;
    }
    return 0;
}