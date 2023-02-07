#include <iostream>
using namespace std;
char myfunc(unsigned char ch);
char myfunc(char ch);
int main()
{
    cout << myfunc('c'); // zdes vizivaetsya myfunc(char).
    cout << myfunc(88) << " "; // vnositsa neodnaznachnost.
    return 0;
}
char myfunc(unsigned char ch)
{
    return ch-1;
}
char myfunc(char ch)
{
    return ch+1;
}
