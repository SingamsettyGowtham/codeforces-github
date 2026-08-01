#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i]; 
            sum += v[i];
        }
        if(sum > s || (s-sum)%x != 0) cout << "NO
";
        else cout << "YES
";
    }
}