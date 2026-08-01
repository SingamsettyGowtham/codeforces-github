#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, a;
        cin >> n >> a;
        int c1 =0, c2=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] < a) c1++;
            if(v[i] > a) c2++;
        }
        if(c1 > c2) cout << a-1 << endl;
        else cout << a+1 << endl;
    }
}