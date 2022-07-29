#include <iostream>
using namespace std;
int main(){
    string t;
    cin>>t;
    string x = "";
    for(int i = 0; i < t.size(); i++){
        x = x + t[i];
        cout<<x<<endl;
    }
    for(int i = 0 ; i < t.size(); i++){
        x.pop_back();
        cout<<x<<endl;
    }
}