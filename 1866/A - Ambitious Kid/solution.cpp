#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int n; cin >> n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
    cin >> a[i]; 
    if(a[i] < 0){
        a[i] = a[i]*(-1);
    }
   }
   sort(a.begin(), a.end());
   cout << a[0];
}