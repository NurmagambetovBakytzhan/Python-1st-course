#include <bits/stdc++.h>
using namespace std;
map<string, int> status;

int main(){
    string pl1, pl2;
    int hp1, hp2, dmg1, dmg2;
    int pl1_hits = 0, pl2_hits = 0;
    cin >> pl1 >> hp1 >> dmg1 >> pl2 >> hp2 >> dmg2;
    status[pl1] = hp1;
    status[pl2] = hp2;

    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        string hit; cin >> hit;
        if(hit == pl1){
            pl1_hits++;
            status[pl2] -= dmg1;
        }
        else{
            pl2_hits++;
            status[pl1] -= dmg2;
        }

        if(status[pl1] <= 0){
            cout << pl2 << " won after " << pl2_hits << " hits!";
            return 0;
        }
        else if(status[pl2] <= 0){
            cout << pl1 << " won after " << pl1_hits << " hits!";
            return 0;
        }
    }
    cout << "Draw!";
}