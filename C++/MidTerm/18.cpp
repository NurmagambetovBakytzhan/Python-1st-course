#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
    int x;
    int total = 0;
    int odd = 0;
    float even = 0;
    while(cin>>x){
        if(x<0){
            break;
        }
        else{
            total++;
        }
        if(x % 2==1){
            odd++;
        }
        else{
            even++;
        }
    }
    float percentEV = even*100/total;
    float percentOD = odd*100/total;
    cout<<setprecision(7)<<percentEV<<" "<<setprecision(7)<<percentOD;
    return 0;
}