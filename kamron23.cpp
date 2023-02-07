#include <iostream>
#include <cstdlib>
using namespace std;

void drill();
int count; // peremennniye count i num_right - globalniye.
int num_right;
int main()
{
    cout << " skolko prakticheskiy uprajnenie: ";
    cin >> count;
    num_right = 0;
    do{
        drill(); count--;
    }while(count);
    cout << " vi dali " <<num_right<<" pravilniy otvetv. \n";
    return 0;

}
void drill()
{
    int count; /* eto pereemennaya count - lokalnaya i nikak ne
    svyazana s odnoimeno globalnoy.*/
    int a, b, ans;
    // generuem dva chisla mejdu 0 i 99.
    a = rand() % 100;
    b = rand() % 100;
    // polzovatel poluchayaet tri popitki dat pravelniy otvet.
    for(count=0; count<3; count++) {
        cout << "skolko budet " << a << " + " << b << "? ";
         cin >> ans;
        if(ans==a +b ) {
            cout << "pravilno\n";
            num_right++;
            return ;
        }
    }

}


