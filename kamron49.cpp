#include <iostream>
using namespace std;
int main()
{
    // peremennaya i lokalnaya dlya cikla for.
    for(int i=0; i<10; i++) {
        cout << i << " ";
        cout << " v kvadrate ravno " << i * i << "\n";
    }
    // i = 10; // *** oshibka *** --i << zdes neizvestno!
    return 0;
}
