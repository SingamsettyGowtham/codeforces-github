#include <bits/stdc++.h>
using namespace std;
 
void pattern(int n){
    for(int row=0; row<=n; row++){
        for(int col=0; col<n-row; col++){
            cout << "  ";
        }
        for(int col=0; col < row+1; col++){
            if(col == row) cout << col;
            else cout << col << " ";
        }
        for(int col=row; col>0; col--){
            cout << " " << col-1;
        }
        cout << endl;
    }
    for(int row=n+1; row<=2*n; row++){
        for(int col=0; col<row-n; col++){
            cout << "  ";
        }
        for(int col=0; col<2*n-row+1; col++){
            if(col == 2*n-row) cout << col;
            else cout << col << " ";
        }
        for(int col=2*n-row-1; col>=0; col--){
            cout << " " << col;
        }
        if(row < 2*n){
            cout << endl;
        }
    }
}
int main(){
    int n;
    cin >> n;
    
    pattern(n);
    return 0;
}