#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> >vv;
    vector <int> temp;
    int cnt = n*n;
    for(int i = 0 ; i <n ; ++i){
        if(i % 2 == 0){
            
            for(int j = 0; j< n; ++j){
                temp.push_back(cnt--);
            }
            vv.push_back(temp);
            temp.clear();
        }else{
            for(int j = 0 ; j < n ; ++j){
                temp.insert(temp.begin(), cnt--);
            }
        }
        vv.push_back(temp);
        temp.clear();
    }
    for(auto i : vv){
        for(    )
    }
    return 0;
}