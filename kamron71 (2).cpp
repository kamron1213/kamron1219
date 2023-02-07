#include <iostream>
using namespace std;
void clrscr(int size=25);
int main()
{
    int i;
    for(i=+100; i<3000; i++) cout << i << '\n';
    clrscr(); // ochisayem 25 strok.
    for(i=+100; i<3000; i++) cout << i << '\n';
    clrscr(10); // ochisayem 10 strok.
    return 0;
}
void clrscr(int size)
{
    for(; size; size--) cout << '\n';
}
