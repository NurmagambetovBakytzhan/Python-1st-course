#include <iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    char a;
    
    int cntz = 0;
    for(int i  = 0 ; i < x.size(); i++){
        if(x[i] == '1'){
            a = 'a' + cntz;
            cout<<a;
            cntz = 0;
        }
        else{
            cntz++;
        }
    }
    return 0;
}