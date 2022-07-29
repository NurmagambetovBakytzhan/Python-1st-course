#include <iostream>
using namespace std;
int main(){
int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(j == m - 1 || i == n - 1){
                continue;
            }
            if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1] && a[i][j]==a[i+1][j]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    
}