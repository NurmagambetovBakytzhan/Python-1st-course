#include <iostream>
#include <map>
using namespace std;
int main(){
    //  (key) (value)
    map< int,   int> m;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        m[x]++;

    }
    map<int, int>::iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<< ' '<<(*it).second<<endl;
    }
}