#include <iostream>
using namespace std;

int main()
{
    int x;
    for(x=10; x<=100000000; x--) {
        if(x%3) continue;
        cout << x << ' ';
    }
    return 0;
}
