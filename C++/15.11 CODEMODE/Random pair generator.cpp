#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<pair<int , int> int> m;
    for(int i = 0; i< n;i++){
        int a,b;
        cin>>a>>b;
        if(a<=b){
            m[make_pair(a,b)]++;
        }
        else{
            m[make_pair(b,a)]++
        }
    }
    map<pair<int , int>int> :: iterator it;
    for( it = m.begin(); it!=m.end() ; it++){

    }
}