#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> a;  
        if(a == 1) count++;
    }
    if(count == 0) cout << "EASY";
    else cout << "HARD";
}