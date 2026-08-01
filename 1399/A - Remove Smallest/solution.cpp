#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        bool rs = true;
        for(int j=1; j<n; j++){
            rs &= (abs(v[j] - v[j-1]) <= 1);
        }
        
        if(rs) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}