#include <bits/stdc++.h>
using namespace std;

void arrayInput(int ar[], int a)
{
    for (int i = 0; i < a; i++) cin >> ar[i];
}

bool hadntCheated(int ar[], int a, int b, int c)
{
    bool yep = true;
    if (c == a) return yep;
    if (ar[c] - ar[c - 1] <= b) return false;
    return yep = hadntCheated(ar, a, b, c + 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ar[a];
    arrayInput(ar, a);
    hadntCheated(ar, a, b, 1) ? cout << "no" : cout << "cheater";

    return 0;
}