#include <iostream>
using namespace std;

void Alphabet(int n, int i, char c){

    if(i == n) return;
    for(int j = 0; j < i + 1; j++){
        if(c == 'Z' + 1) c = 'A';
        cout << c++ << " ";
    }
    cout << endl;

    Alphabet(n, ++i, c);
}

int main(){

    int n; cin >> n;
    char c = 'A';

    Alphabet(n, 0, c);
}