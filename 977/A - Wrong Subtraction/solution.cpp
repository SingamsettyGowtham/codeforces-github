#include <bits/stdc++.h>
using namespace std;
 
void wrongSubtraction(int num, int subTimes){
    for(int i=1; i<=subTimes; i++){
        int rem = num % 10;
        if(rem == 0){
            num /= 10;
        }
        else{
            num -= 1;
        }
    }
    cout << num;
}
 
int main(){
    int n, k;
    cin >> n >> k;
 
    wrongSubtraction(n, k);
    return 0;
}