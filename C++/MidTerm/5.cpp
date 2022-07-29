#include <iostream>
#include <cmath>
using namespace std;
int fff(int n, int m){
    return n ^ m;
}
int ggg(int n, int m){
    return fff(n, fff(m,n+m));
}


int main(){
    int n,m;
    cin>>n>>m;
    cout<<ggg(n,m);
    return 0;
}