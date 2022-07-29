#include <iostream>
#include <cmath>
using namespace std;
void dist(int x1, int y1, int x2, int y2){
    
    cout<<sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

}
int main(){
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    dist(x1,y1,x2,y2);
    return 0;
}