#include <iostream>
using namespace std;
int gridpath(int n ,int m){
    if(n == 1|| m==1){
        return 1;
    }
    else{
        return gridpath(n-1,m)+gridpath(n,m-1);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gridpath(n,m);
    system("pause");
    return 0;
    
}
