#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main(){
    int n;
    int x;
    cin>>n;
    set<int> s;
    for(int i = 0  ; i< n ; i++){
        cin>>x;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it = s.begin(); it!= s.end(); it++){
        if(*it%2==0){
            continue;
        }
        else{
            cout<<*it<<" ";
        }
    }
    return 0;
}