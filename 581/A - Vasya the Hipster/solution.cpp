#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a, b;
    cin >> a >> b;
    cout << min(a,b) << " " << (b < a ? (a-b)/2 : (b-a)/2);
}