#include <iostream>
using namespace std;
int main()
{
    double *p;
    int i;
    p = new double [10]; // videlyaem pamyat dlya 10-elementnogo masiva.
    // zapolyaem massiv znacheniye ot 100 d0 1009.
    for(i=0; i<10; i++) p[i] = 100.00 + i;
    // otobrajaem soderjimoye masiva.
    for(i=0; i<10; i++) cout << p[i] << " ";
    delete [] p; // udalyaem ves massiv.
    return 0;
}
