#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a, r = 0, c = 0; cin >> n;
    while(n--){
        cin >> a;
        if(a > 0) r += a;
        if(a == -1){
            if(r > 0) r--;
            else c++;
        }
    }
    cout << c;
}