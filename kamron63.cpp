#include <iostream>
using namespace std;
double &f();
double val = 100.0;
int main()
{
    double newval;
    cout << f() << '\n'; // otobrajaem znachenie val.
    newval = f(); // prisvaivaem znacheniye val peremennoy newval.
    cout << newval << '\n'; // otobrajaem znacheie newval.
    f()= 99.1; // izmenyaem znachenie val
    cout << f() << '\n'; // otobrajaem novoy znachenie val.
    return 0;
}
double &f()
{
    return val; // vozvrashaem ssilku na val.
}
