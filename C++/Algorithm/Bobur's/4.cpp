#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
void fu(int a){
    cout<<a<<" ";
}
int gen(){
    return rand() %10;
}
int main(){
    vector<int> v(10);
    generate(v.begin(), v.end(), gen);
    for_each(v.begin(), v.end(), fu);
}