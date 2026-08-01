#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int row =0; row<5; row++){
        for(int col =0; col<5; col++){
            cin >> a[row][col];
        }
    }
    for(int row =0; row<5; row++){
        for(int col =0; col<5; col++){
            if(a[row][col] == 1){
                int count = abs((row+1 -3)) + abs((col+1 -3));
                cout << count;
            }
        }
    }
    return 0;
}