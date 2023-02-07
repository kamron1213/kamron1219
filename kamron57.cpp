#include <iostream>
using namespace std;
// obyavlyaem funcsyu swap(), kotoraya ispolyzuet ukazatelyu.
void swap(int *x, int *y);
int main ()
{
    int i, j;
    i = 10;
    j = 20;
    cout << "isxodyashuyu znacheniyu peremenik i i j: ";
    cout << i << ' ' << j << '\n';
    swap(&j, &i); // vizivayem swap() s adresami peremenik i i j.
    cout << "znacheniye  peremenik i i j posle obmena: ";
    cout << i << ' ' << j << '\n';
    return 0;
}
// obmen argumentami.
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // vremmeno soxranyaem znachesmiye, raspolojeno poadresu x.
    *x = *y; // pomeshayaem znacheniye, xranimeyo po adresu y, v adres x.
    *y  = temp; // pomeshayem znacheniy, kotoroye ranshe xranilos po adresu x, v adres y.
}
