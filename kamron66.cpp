#include <iostream>
using namespace std;
void f(int i); // odin celovhiloskoy parametr
void f(int i, int j); // dva clochiskoy parametra
void f(double k); // odin parametr tipa double
int main()
{
    f(10); // vizov funcsi f(int)
    f(10, 20); // vizov funcsi f (int, int)
    f(12.23); // viozv funcsi f(double)
    return 0;
}
void f(int i)
{
    cout << "v funcsi f(int), i ravno " << i << '\n';
}
void f(int i, int j)
{
    cout <<"v funcsi f(int, int), i ravno " << i;
    cout << ", j ravno " << j << '\n';
}
void f(double k)
{
    cout << "v funcsi f(double), k ravno " << k << ' \n';
}
