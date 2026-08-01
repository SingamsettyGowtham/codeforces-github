#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin >> n;
    vector<int> v(n);
    int maxx = 0, sum = 0, actual_sum;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        if(v[i] > maxx) maxx = v[i];
    }
    actual_sum = n * maxx;
    cout << actual_sum - sum;
}