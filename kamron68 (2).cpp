#include <iostream>
using namespace std;
int main()
{
    int j, k;
    int &i = j; // nezavisimaya silka
    j =10;
    cout << j << " " << // vividanie: 10 10
    k = 121;
    i = k;
    cout << "\n" << j;
    return 0;
}

