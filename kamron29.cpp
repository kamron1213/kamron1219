#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for(i=2; i<1000; i++) {
        for(j=2; j<=(i/j); j++)
            if(!(i%j)) break; // esli chislo imeet mnojitel,znachit,ono ne prostie
        if(j > (i/j)) cout << i << " - prostie chislo\n";
    }
    return 0;
}
