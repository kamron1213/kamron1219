#include <iostream>
using namespace std;
void f (int *j);
int main()
{
    int i;
    f(&i);
    cout << i;
    return 0;
}
void f (int * j)
{
    *j = 100; // peremennoy, adrisuemmoy ukazatelom j, prizvasivatsa chislo 100.
}
