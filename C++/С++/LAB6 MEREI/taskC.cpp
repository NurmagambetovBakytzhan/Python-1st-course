#include <iostream>
using namespace std;

void read(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 int right (int a[], int n) {
     int b[n];
     for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
             if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
             }
         }
         b[i] = a[i];
     }
     return b[n];
 }

 void print (int a[], int n) {
     for (int i = 0; i < n; i++) {
         cout << a[i] << " ";
     }
 }



    int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    read (a, n);
    read (b, n);
    int c[] = {right(a, n)};
    int d[] = {right(b, n)};
    print (c, n);
    cout << endl;
    print (d, n);
    return 0;
}
