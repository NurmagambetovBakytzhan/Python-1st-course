#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v = (1, 2, 3 ,51 ,22 ,4);
    vector <int> :: iterator it;   // it -just  name 
    for(it = v.begin (); it != v.end(); ++it){ // v.begin-->'1' 
        cout<<*it<<' ';
    }
    cout<<'\n';
    sort(v.begin() , v.end() );
    /*for(auto i :: v){
        cout<< i << " ";

    }
    */
    return 0;
}