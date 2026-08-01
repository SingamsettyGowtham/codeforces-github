#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin >> n;
    int c = 0;
    int v[] = {100, 20, 10, 5, 1};
    for(int i=0; i<5; i++){
        int bill = n/v[i];
        n = n%v[i];
        c += bill;
    }
    cout << c;
    return 0;
}