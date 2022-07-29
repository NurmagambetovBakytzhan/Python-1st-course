//скатал, но задачу понял
#include <iostream>
using namespace std;
#define fr(i ,n) for(int i = 0 ; i < n ; i++)
char a[51][51];
void left(int x , int y, int i, int j){
    a[x][y] = (char)i;
    if(i == j){
        return;
    }
    left(x , y - 1, i +1 , j);
}
void right(int x , int y, int i, int j){
    a[x][y] = (char)i;
    if(i == j){
        return;
    }
    right(x , y + 1, i +1 , j);
}
void up(int x , int y, int i , int j){
    
    left(x , y , i , j);
    right(x, y , i , j);
    if(i == j){
        return;
    }
    up(x - 1 , y , i + 1, j);
}
void down(int x , int y, int i , int j){
    
    left(x , y , i , j);
    right(x, y , i , j);
    if(i == j){
        return;
    }
    down(x + 1 , y , i + 1, j);
}
int main(){
    int n;
    cin>>n;
    int size = 2*n -1 ;
    int x = n - 1;
    int y = n - 1;
    int i = (char)'a';
    int j = i + x;
    fr(row, size){
        fr(cln, size){
            a[row][cln] = '-';
        }
    }
    up(x , y , i , j);
    down(x , y , i , j);
    fr(row, size){
        fr(cln, size){
            cout<<a[row][cln];
        }
        cout<<endl;
    }
    return 0;

}