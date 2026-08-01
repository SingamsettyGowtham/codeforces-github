#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int l=0, u=0;
    for(int i=0; i<v.size(); i++){
        if(v[i] <= h) l++;
        else u += 2;
    }
    cout << l + u;
}