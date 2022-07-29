#include <iostream>
#include <set>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    set<int> sss;
    int prevsize = 0 ;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);
        if(prevsize == s.size){
           sss.insert(x);
        }
        prevsize = s.size();
    }
    set<int> :: reverse_iterator it;{
        for(int it = sss.rbegin(); it!=sss.rend(); it++){
            cout<<*it<<' ';
        }     
    }
    return 0;
}