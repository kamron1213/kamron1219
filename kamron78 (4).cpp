#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *i;
    double *j;
    i = (int *) malloc(sizeof(int));
    if(!i) {
        cout << "videlit pamyat ne udalos. \n";
        return 1;
    }
    j = (double *) malloc(sizeof(double));
    if(! j ) {
        cout << "videlit pamyat ne udalos.\n";
        return 1;
    }
    *i = 10;
    *j = 100.123;
    cout << *i << ' ' << *j;
    // svobodno pamyati.
    free (i);
    free (j);

    return 0;
}
