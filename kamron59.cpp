#include <iostream>
using namespace std;
void f(int &i);
int main()
{
    int val = 1;
    cout << "stroye znacheniye premennoy val: "<< val <<'\n';
    f(val); // peredyem adres peremennoy val: " << val << '\n';
    return 0;
}
void f(int &i)
{
    i = 10; // modifikaciya argumenta, zadnno pri vizove.
}


