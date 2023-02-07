#include <iostream>
using namespace std;
// funcsya myabs() peregrujaetsya tremya sposobami.
int myabs(int i);
double myabs(double d);
long myabs(long l);
int main()
{
    cout << myabs(-10) << "\n";
    cout << myabs(-11.0) << "\n";
    cout << myabs(-9L) << "\n";
    return 0;
}
int myabs(int i)
{
    cout << "ispolzovanie int-funcsi my abs(): ";
    if(i<0) return -i;
    else return i;
}
double myabs(double d)
{
    cout << "ispolzovaniye double-funcsi myabs(): ";
    if (d<0.0) return -d;
    else return d;
}
long myabs(long i)
{
    cout << "ispozovanie Long-funcsi(): ";
    if(1<0) return -1;
    else return 1;
}
