#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void per(float p, float g){
    float k = (100*g) / p;
    cout<<k;
}
int main(){
    int p,g;
    cin>>p>>g;
    float a = p/1;
    float b = g/1;
    
    per(a,b);
    return 0;
}