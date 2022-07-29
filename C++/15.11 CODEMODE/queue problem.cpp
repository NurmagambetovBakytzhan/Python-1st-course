//до первого гласного + вывести позицию

#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<char> q;
    char t;
    while (cin>>t)
    {
        if(t=='a' ||  t=='e' || t=='u' || t=='i' || t=='o'){
         break;
        }
        q.push(t);
    }
        cout<<q.size()<<" "<<q.front()<<endl;
    return 0;
}