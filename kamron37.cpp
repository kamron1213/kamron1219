#include <iostream>
using namespace std;
int main()
{
    int choise;
    cout << "spravka po tamas \n\n";
    cout << "1. for\n";
    cout << "2. if\n";
    cout << "3. switch\n\n";
    cout << "vvedite nomer temi (1-3): ";
    cin >> choise;
    switch(choise)  {
     case 1:
     cout << "for - Geopolitik qarashlar va nazariyalar, ularni geopolitik hodisalar hamda yuz berayotgan siyosiy o'zgarishlar bilan solishtirish, qanchalar reallikka mos tushishi tahlillari.\n";
     break;
     case 2:
         cout << "if - Dunyo tarixidagi va bugungi kundagi geostrategik yondashuvlar, doktrinalar, nazariyalar hamda amalga oshirilayotgan operatsiyalar..\n";
     break;
     case 3:
        cout <<"switch - .\n";
        break;
     default:
        cout << " Dinlar va ular asosida yaralgan sivilizatsiyalar orasidagi munosabatlar, ularning tarixdagi hamda bugungi kundagi jahon geopolitikasiga ta'sirlari. \n";
        }
        return 0;
}
