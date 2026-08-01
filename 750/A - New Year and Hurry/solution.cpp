#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ,k;
    cin >> n >> k;
    int c = 0, totol_min = 0;
    for(int i=1; i<=n; i++){
        totol_min += 5*i;
        if(totol_min+k <= 240){
            c++;
        }
    }
    cout << c;
}