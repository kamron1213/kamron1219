#include <iostream>
using namespace std;
struct mystruct {
int a; int b;
};
mystruct &f(mystruct &var);
int main()
{
    system("COLOR 0B");
    mystruct x, y;
    x.a = 10; x.b = 20;
    cout << "isxodniye znacheniye poley x.a and x.b: ";
    cout << x.a << ' ' << x.b << '\n';
    y = f(x);
    cout << "modicirovannnoye znahcenie poley x.a i x.b: ";
    cout << x.a << x.a << ' ' << x.b << '\n';
    cout << "modifikaciay znahceniye poley y.a i y.b: ";
    cout << y.a << ' ' << y.b << '\n';
    return 0;
}
// funcsya kotoraya poluchayet i vozvarashet ssilku na stroku.
mystruct &f(mystruct &var)
{
    var.a = var.a * var.a;
    var.b = var.b / var.b;
    return var;
}

