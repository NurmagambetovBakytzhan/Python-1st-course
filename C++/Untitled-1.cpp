#include <iostream>
using namespace std;
void triangle(int x){
    if(x<= 0){
        return;
    }
    triangle(x-1);
    for(int i = 0 ; i < x; i++){
        cout<<"*";

    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    triangle(n);
    return 0;
}