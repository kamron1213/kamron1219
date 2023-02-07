#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("color A0");
    int i;
    // vvod chisel na ekran do najatiya lyuboy klavashi.
    for(i=0; !kbhit(); i++)
        cout << i << ' ';
    return 0;
}
