#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    int sys, num2=0, i;
cout << "\nEnter nomer:" << endl;
cin >> num;
cout << "Enter sistemu schicleniya:" << endl;
cin >> sys;
for(i = 0; num >= sys-1; i++)
{
    num2 += (num%sys)*pow(10, i);
    num /= sys;
}
num2 += num*pow(10, i++);
cout << num2 << endl;
}