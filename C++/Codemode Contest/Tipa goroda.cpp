#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string, vector<string>> mm;
    m["Italy"] = {"Rome", "Palermo" , "Venezia"};
    m["Spain"] = {"Barcelona", "Madrid" , "Valencia"};
    m["France"] = {"Paris" , "Marcel", "Lille"};

    for(it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<endl;
        for(int i = 0; i< (*it).second.size(); it++){
            cout<<(*it).second[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}