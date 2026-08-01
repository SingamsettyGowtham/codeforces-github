#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k; cin >> n >> k;
    int c=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if (5 - v[i] >= k) c++;
    }
    int result = c / 3;
    cout << result;
}