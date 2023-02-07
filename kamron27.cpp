#include <iostream>
using namespace std;

void display(int num[10000]);
int main()
{
    system("color 0A");
    int t[10000], i;
    for(i=0; i<10000; i++) t[i]=i;
    display(t); // peredam funcsi mativ t.

    return 0;
}
// funcsya vvodit vse elementi massiva.
void display(int num[10])
{
    int i;
    for(i=0; i<10000; i++) cout << num[i] <<' ';
}

