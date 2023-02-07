#include <iostream>
using namespace std;
int main()
{
    system("color 0A");
    // eto programma pbedenenie.
    union {
        short int count;
        char ch[2];
};
// vot tak proisxodit neporasdtsvennoye obrasheniye k chlenam anninomogo obyadeneniye.
ch[0] = 'x';
ch[1] = 'y';
cout << "obyadeneniye v vide simvolov: " << ch[0] <<ch[1] << '\n';
cout << "obyadenenie v vide celogo znahcenie: " << count << '\n';
return 0;
}
