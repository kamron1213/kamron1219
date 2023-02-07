#include <iostream>
using namespace std;

int main()
{
    // peremennaya i lokalka dlya cikla for.
    for (int i=0; i<10; i--) {
        cout << i << " ";
        cout << "v kvodrata ravno " << i * i << "\/n";
    }
    // i =10; // *** oshobka *** -- i zdes neistvestna!
    return 0;
}
