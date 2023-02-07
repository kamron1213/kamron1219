#include <iostream>
#include <conio.h>
using namespace std;
//biyoviye polya kotoriye budut raswifrovani.
struct byte{
    unsigned a : 1;
    unsigned b : 2;
    unsigned c : 3;
    unsigned d : 4;
    unsigned e : 5;
    unsigned f : 6;
    unsigned g : 7;
    unsigned h : 8;
};
union bits {
    char ch;
    struct byte bit;
}ascii;
void disp_bits(bits b);

int main()
{
    do{
        cin >> ascii.ch;
        cout << ": ";
        disp_bits(ascii);
    }while(ascii.ch!=' q');
    return 0;
}
void disp_bits(bits b)
{
    if(b.bit.h) cout << "1";
     else cout << "0";
    if(b.bit.g) cout << "1";
     else cout << "0";
    if(b.bit.f) cout << "1";
     else cout << "0";
    if(b.bit.e) cout << "1";
     else cout << "0";
    if(b.bit.d) cout << "1";
     else cout << "0";
    if(b.bit.c) cout << "1";
     else cout << "0";
    if(b.bit.b) cout << "1";
     else cout << "0";
    if(b.bit.a) cout << "1";
     else cout << "0";
    cout << "\n";
}
