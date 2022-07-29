#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main(){
    int arr[]={1,2,3,45,6,7,8,1,2,3,5,6};
    set <int> s;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        s.insert(arr[i]);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    set<int>::iterator it;
    for(it = s.begin(); it != s.end() ; it++){
        cout<<*it<<" ";
    }
    return 0;
}