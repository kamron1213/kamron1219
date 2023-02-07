#include <iostream>
using namespace std;
double &change_it(int i);
// funcsya vozvrashayet ssilku.
double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};
int main()
{
    int i;
    cout << "vot isxodnie znachenie: ";
    for (i=0; i<5; i++)
        cout << vals[i] << ' ';
    cout << '\n';
    change_it(1) = 5298.23; // izmenyaem 2-y element.
    change_it(3) = 98.8; // izmenyaem 4-y element.
    cout << "vot izmenyaem znachenie: ";
    for(i=0; i<5; i++)
        cout << vals[i] << ' ';
    cout << '\n';
    return 0;
}
double &change_it(int i)
{
    return vals[i]; // vozvrashaem ssilku na 1-y element.
}
