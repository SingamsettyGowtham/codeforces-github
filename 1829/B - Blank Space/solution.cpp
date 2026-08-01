#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int c = 0, a = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] == 0) c++;
            else{
                a = max(a, c);
                c = 0;
            }
        }
        cout << max(a , c) << endl;
    }
}