#include <iostream>
using namespace std;
int main(){
    int n;
    int t;
    cin>>n;
    string a = "00000000";
    for(int i = a.size()-1 ; i >=0; i--){
        a[i]=char(n%2 + '0');
        n/=2;
        
    }
    for(int i = 0 ; i < a.size(); i++){
        if( a[i] == a[a.size()-1 - i] ){
            continue;
        }
        else{
            cout<<"Sad";
            return 0;
        }
    }
    cout<<"It works!";
    

    return 0;
}
//5%2=1 ==> 5/2 = 2 ;  2 % 2 = 0   ==> 2/2=1; 1%2==1; 1/2 = 0;