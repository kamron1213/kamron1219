#include <iostream>
using namespace std;
int main()
{
    int korzinka;
    int snickers = 8000;
    int moloko = 12000;
    int kofe = 43000;



    cout <<"vvedite nomer producti(1-6):";
    cin >> korzinka;

    cout << "\n";

    switch(korzinka){
    case 1:
        cout <<"shokolad snikers, 8000 summ.\n";
        break;
    case 2:
        cout << "moloko mussafo, 12000 summ\n";
        break;
    case 3:
        cout <<"kofe neskafe gold, 43000 summ\n";
        break;
    case 4:
        cout<<"snickers va moloko\n" << snickers  + moloko;
        break;
    case 5:
        cout <<"snickers va kofe\n" << snickers + kofe;
        break;
    case 6:
        cout<<"moloko va kofe\n" << kofe + moloko;
        break;
    default:
        cout <<"vi doljni vvsti produkti ot 1 do 3.\n";

    }
    return 0;
}
