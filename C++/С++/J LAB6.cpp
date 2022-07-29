#include <iostream>
using namespace std;


int max(int a , int b){
    int max = 0;
    if (a >= b ){
        max = a;
    }
    else{
        max = b;
    }
    return max;

}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(max(a,b) , max(c,d));
    return 0;
}
