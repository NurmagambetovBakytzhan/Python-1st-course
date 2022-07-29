#include <iostream>
#include <algorithm>
using namespace std;

int beg = 0;
int gen(){
    int temp = beg;
    beg++;
    return temp;
}

int main(){
    int ar[5] = {1, 2 ,3 ,6, 7};
    generate(ar, ar+5, gen);
    for(int i = 0 ; i < 5; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}