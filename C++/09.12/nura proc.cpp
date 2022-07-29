#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> check;
    set<int> harosh;
    set<int> ploh;
    while(n--){
        
        int m = check.size();
        int x;
        cin>>x;
        check.insert(x);
        if(check.size() == m){
            ploh.insert(x);
            
        }
        else{
            harosh.insert(x);
        }

    }
}