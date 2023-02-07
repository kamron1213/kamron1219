#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    struct tm *ptr;
    time_t it;
    lt = time('\0');
    ptr = lokaltime(&lt);
    cout << ptr->tm_hour << ':' << ptr->tm_min;
    cout << ':' << ptr->tm_sec;
    return 0;

}
