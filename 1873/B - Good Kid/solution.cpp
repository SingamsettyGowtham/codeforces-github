#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; 
    cin >> n;
 
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
 
    int ans=1;
    sort(a.begin(), a.end());
    a[0]++;
 
    for(int j=0; j<n; j++){
        ans*=a[j];
    }
    
    cout << ans << endl;
 
}
 
int main(){
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t;
   cin >> t;
   while(t--){
    solve();
   }
}