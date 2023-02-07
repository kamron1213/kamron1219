#include <iostream>
using namespace std;

int main()
{
    int x, y;
    x = 0;
    y = 0;
    char mul;
    while (true)
    {
        cin >> y >> x >> mul;
        switch (mul) {
    case '/':
        cout << x / y;
        break;
    case'-':
        cout << x / y ;
        break;

    case'+':
        cout << x + y;
        break;

    case'1':
            return 0;
        default:
            return 0;
            }
    }
}
