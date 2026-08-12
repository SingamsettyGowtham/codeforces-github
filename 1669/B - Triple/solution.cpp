#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t; cin >> t;
   while(t--){
    int n; cin >> n;
    vector<int> c(n+1, 0);
    int ans = -1;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(++c[x] >= 3){
            ans = x;
        }
    }
    cout << ans << endl;
   }
}