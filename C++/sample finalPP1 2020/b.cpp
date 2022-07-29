#include <iostream>
using namespace std;
int n , m;
bool flag;
char a[6][6]; //DFS
void path(int i, int j){

    if(i < 0 || i>=n || j<0 || j >=m|| a[i][j]=='#'){
        return;
    }
    a[i][j]= '#';
    if(i == n -1  && j == m -1){
        flag = true;
    }
    path( i+1 , j);
    path( i-1 , j);
    path( i , j+1);
    path( i , j-1);
}



int main(){
    cin>>n>>m;
    
    for(int i = 0 ; i < n  ; i ++){
        for(int j = 0 ; j < m ; j++){
            cin>>a[i][j];
        }
    }
    path(0, 0);
    flag ? cout << "YES" : cout << "NO";
    return 0;
}