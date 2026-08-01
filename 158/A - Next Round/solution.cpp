#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    int count =0;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<v.size(); i++) if(v[i] >= v[k-1] && v[i] > 0) count +=1;
    cout << count;
    return 0;
}