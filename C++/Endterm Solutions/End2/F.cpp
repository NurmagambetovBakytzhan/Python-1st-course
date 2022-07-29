#include <iostream>
using namespace std;

int HeroX, HeroY, ThiefX, ThiefY;
string Track;
char arr[10][10];

void print(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            cout << arr[i][j];
        cout << endl;
    }
}

int main(){

    cin >> HeroX >> HeroY >> ThiefX >> ThiefY >> Track;
    
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            arr[i][j] = '_';

    for(int i = 0; i <= Track.size(); i++){
        if(HeroX < 0 or HeroX >= 10 or HeroY < 0 or HeroY >= 10){
            cout << "The thief is too far away!";
            return 0;
        }
        if(HeroX == ThiefX and HeroY == ThiefY){
            arr[ThiefX][ThiefY] = '$';
            cout << "The thief is caught!\n";
            print();
            return 0;
        }
        if(i == Track.size()){
            cout << "The hero gave up\n";
            arr[ThiefX][ThiefY] = 'T';
            arr[HeroX][HeroY] = 'H';
            print();
            return 0;
        }
        arr[HeroX][HeroY] = '*';
        if(Track[i] == 'R') HeroY += 1;
        if(Track[i] == 'L') HeroY -= 1;
        if(Track[i] == 'D') HeroX += 1;
        if(Track[i] == 'U') HeroX -= 1;
    }
}
