#include <iostream>
using namespace std;
void f (int *j);
int main()
{
    int i;
    int *p;
    p = &i; // ukazatel p teper soderjit adres peremennoy i.
    f(p);
    cout << i; // peremenneye i teper soderjit chislo 100.
    return 0;
}
void f (int *j)
{
    *j   =    100; // peremennoy, adresuemmoy ukazatelom j,praizvasivatsa chislo 100.
}
