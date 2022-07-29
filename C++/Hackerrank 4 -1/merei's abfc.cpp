#include <iostream>
using namespace std;
#define fr(i, n) for(int i = 0; i < n; i++)
    char a[51][51]; // 26 letters overall, max size:(26*2)-1
    void left(int x, int y, int i, int j){
        a[x][y] = char(i);
        if (i == j) return;
        left(x, y-1, i+1, j);
    }
    void right(int x, int y, int i, int j){
        a[x][y] = char(i);
        if (i == j) return;
        right(x, y+1, i+1, j);
    }
    void down(int x, int y, int i, int j){
        left(x, y, i, j);
        right(x, y, i, j);
        if(i == j) return;
        down(x+1, y, i+1, j);
    }
    void up(int x, int y, int i, int j){
        left(x, y, i, j);
        right(x, y, i, j);
        if(i == j) return;
        up(x-1, y, i+1, j);
    }
int main(){
    int n;
    cin >> n;
    int size = n*2 - 1; // size of array
     int x = n-1, y = n-1; // centre coordinates
        int i = char('a'); // first letter
        int j = i+x; // last necessary letter
        fr(row, size){
            fr(cln, size){
                a[row][cln] = '-';
            }
        }
        down(x, y, i, j);
        up(x, y, i, j);
        fr(row, size){
            fr(cln, size){
                cout << a[row][cln];
            }
            cout << endl;
        }
    return 0;
}