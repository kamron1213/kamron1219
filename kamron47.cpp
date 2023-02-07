#include <iostream>
using namespace std;
void f1();
int main()
{
    char str[] = "eto - massiye str v funcsya main().";
    cout << str <<'\n';
    f1();
    cout << str <<'\n';
    return 0;
}
void f1()
{
    char str[80];
    cout << "vvedite kokuyu-nibut stroku: ";
    cin >> str;
    cout << str << '\n';
}
