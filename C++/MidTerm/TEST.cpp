#include <iostream>
using namespace std;
#define fr(i, n) for (int i = 0; i < n; i++)
int main(){ 
    int n;
    cin>>n;
    char a[n][n];
    if(n %2==0){
        fr(i, n) {
            fr (j, n) {
                if (i >= j) a[i][j] = '#';
                else a[i][j] = '.';
            }
        }
    } else {
        fr(i, n) {
            fr (j, n) {
                if (i + j >= n-1) a[i][j] = '#';
                else a[i][j] = '.';
            }
        }
    }
    fr (i, n) {
        fr (j, n) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}