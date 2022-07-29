#include <iostream>
using namespace std;
void pos(int n){
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<-n;
    }

}
int main(){
    int n;
    cin>>n;
    pos(n);
    return 0;
}