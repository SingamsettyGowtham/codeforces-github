#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, p, q;
    cin >> n;
    set<int> s;
    cin >> p;
    vector<int> v1(p);
    for(int i=0; i<p; i++){
        cin >> v1[i];
        s.insert(v1[i]);
        
    }
    cin >> q;
    vector<int> v2(q);
    for(int i=0; i<q; i++){
        cin >> v2[i];
        s.insert(v2[i]);
    }
    if(p == 0 && q == 0) cout << "Oh, my keyboard!";
    else{
        if(s.size() == n) cout << "I become the guy.";
        else cout << "Oh, my keyboard!";
    }
    return 0;
}