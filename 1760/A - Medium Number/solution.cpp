#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        int max_num = max({a, b, c});
        int min_num = min({a, b, c});
        cout << sum-(max_num + min_num) << endl;
    }
    
}