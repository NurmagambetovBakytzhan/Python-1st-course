#include <iostream>
using namespace std;
const int N = 5;

void research(char ar[][N], int i, int j){
    if(i >= N||j>=N|| i < 0|| j < 0 || ar[i][j] == '.'|| ar[i][j] == '$'){
     return ;
    }
    research(ar, i-1, j);
    research(ar, i+1, j);
    research(ar, i-1, j-1);
    research(ar, i+1, j+1);
}

int main(){
    char ar[N][N];
    for(int i = 0; i < N ;++i){
        for(int j = 0;j < N; ++j){
            
            cin>>ar[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < N ;++i){
        for(int j = 0;j < N; ++j){
            if(ar[i][j] == '*'){
                cnt++
                research(ar, i , j);
            }
        }
    }

     cout<<cnt;
     return 0;
}