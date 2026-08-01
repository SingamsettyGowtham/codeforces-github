#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int y, w;
    cin >> y >> w;
    
    vector<string> v = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    
    int a = max(y,w);
    
    cout << v[a] << endl;
    
}