#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int magic; // magicheskoe cchislo
    int guess; // variant polzovatela
    magic = rand(); // poluchaem sluchaynoye chislo.
    do {
        cout << "vvedite svoy variant magicheskoye chisla: ";
        cin >> guess;
        if(guess == magic) {
            cout << "** pravilno ** ";
            cout << magic <<" i est to samiye magicheskoye chislo.\n";
        }
        else {
            cout << "...ochen jal, no vi oshibilis.";
            if(guess > magic)
                cout <<" vash variant previshayet magicheskoye chislo.\n";
            else cout <<" vash variant menshe magichsekoye chisla.\n";
        }
       } while(guess != magic);
        return 0;
}

