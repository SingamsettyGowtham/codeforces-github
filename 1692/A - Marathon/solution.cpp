#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int c=0;
        vector<int> v(4);
        for(int i=0; i<4; i++){
            cin >> v[i];
            if(v[0] < v[i]) c++;
        }
        cout << c << endl;
    }
}