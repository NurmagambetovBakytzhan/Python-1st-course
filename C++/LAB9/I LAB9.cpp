#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string> set;
    int newsize;
    int n;
    cin>>n;
    while(n--){
        newsize = set.size();
        string s;
        cin>>s;
        set.insert(s);
        if(set.size() == newsize){
            cout<<"user already exists"<<endl;
        }
        else{
            cout<<"new user added"<<endl;
        }
    }
    return 0;
}