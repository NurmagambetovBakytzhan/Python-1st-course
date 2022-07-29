#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
bool mysort(int &a,int &b){
    return a> b;
}
int main(){
    int n ;
    cin>>n;
    vector <int> v;
    for(int i = 0  ; i <n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin() , v.end(), mysort);
    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;

}