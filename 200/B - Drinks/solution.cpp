#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long double n; 
    cin >> n;
    long double sum=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i]; 
    }
    cout << sum/n;
}