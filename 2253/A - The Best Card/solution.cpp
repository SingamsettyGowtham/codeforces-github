#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    bool good = true;
    for(int i=2; i<=n; i++){
        if((n+1) % i == 0){
            good = false;
        }
    }
    if(good){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
 
int main(){
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int t; cin >> t;
   while(t--){
        solve();
   }
 
}