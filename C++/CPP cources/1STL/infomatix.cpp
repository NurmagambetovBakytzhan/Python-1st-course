#include <iostream>
using namespace std;
void primeFactorizationv2(int n,int i)
{
    if (n<2)
        return;
    if (n % i == 0)
    {
        primeFactorizationv2(n/i,i);
        cout << i << " ";
    }
    else
        primeFactorizationv2(n,i+1);
}

int main ()
{
    int n;
    cin >> n;
    primeFactorizationv2(n, 2);
    cout<<"\n";

    return 0;
}