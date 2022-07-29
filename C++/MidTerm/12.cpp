#include <iostream>
using namespace std;
int main(){
    int d,c,n,di,ci;
    cin>>d>>c>>n>>di>>ci;
    int incent = 100*d + c;
    int price = incent * n;
    int wallet = di*100 + ci;
    int check = wallet - price;
    int cents = check % 100;
    int dollars = check /100;
    if (check <0){
        cout<<-1;
    }
    else{
        cout<<dollars<<" "<<cents;
    }
    return 0;
}