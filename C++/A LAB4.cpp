#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int hui;
    for(int i = 0 ;i < n ; i++){
        for(int j = 0 ; j < n ; j ++){
            cin>>a[i][j];

        }
    }
    for(int i = 0 ;i < n ; i++){
        for(int j = 0 ; j < n ; j ++){
            if(a[i][j] >= hui){
                hui = a[i][j];
            }

        }

    }
    cout<<hui;
    return 0;
}