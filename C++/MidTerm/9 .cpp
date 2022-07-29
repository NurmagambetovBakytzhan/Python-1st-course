#include <iostream>
using namespace std;
string bin(int n){
    string s;
    if(n == 0){
        return s;
    }
    
    return bin(n/2) + char(n%2+48);
    }
int main(){ 
    int n ;
    int cntz;
    int cnto;
    cin>>n;

    cout<<bin(n)<<endl;
    string t = bin(n);
    for(int i = 0 ; i< t.size() ;i++){
        if(t[i] == '0'){
            cntz++;
        }
        else if(t[i] == '1'){
            cnto++;
        }
    }
    cout<<"zeros"<<" "<<cntz<<endl;
    cout<<"number of units"<<" "<<t.size() - cntz;
    return 0;
}