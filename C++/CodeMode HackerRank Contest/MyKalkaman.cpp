#include <iostream>
using namespace std;
char a[10][10];
int si, sj, fi,fj;
bool flag;
void labi(char a[][10], int i , int j){
    if(i == fi && j==fj){
        flag = true;
    }
    if(i >= 10 || i<0|| j>=10|| j < 0 || a[i][j]=='#'){
        return;
    }
    a[i][j] = '#';
    labi(a, i+1, j);
    labi(a, i+1, j);
    labi(a, i, j+1);
    labi(a, i, j+1);

}


int main(){
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10; j++){
            cin>>a[i][j];
        }
    }
    cin>>si>>sj>>fi>>fj;
    labi(a,si,sj);
    cout<<(flag ? "Found))": "Not found((") ;
    return 0;
}