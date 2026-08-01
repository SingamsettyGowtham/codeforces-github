#include <bits/stdc++.h>
using namespace std;
int main(){
    int w, k, l; 
    cin >> w >> k >> l;
    int sum = 0;
    for(int i=1; i<=l; i++) sum += (i*w);
    if(sum-k < 0) cout << 0;
    else cout << sum-k;
}