#include <iostream>
using namespace std;
int &put(int i); // pomeshayem znachenie v massiv.
int get(int i); // sdhitavayem znachenuye iz massiva.
int vals[10];
int error = -1;
int main()
{
    put(0) = 10; // pomesjayem v masiv.
    put(1) = 20;
    put(9) = 30;
    cout << get(0) << ' ';
    cout << get(1) << ' ';
    cout << get(9) << ' ';
    // a teper spicialno generuem oshibku.
    put(12) =1; // index za predalami granic massiva.
    return 0;
}
// funcsiya znachenie v massiv.
int &put(int i)
{
    if(i>=0 && i<10)
        return vals[i]; // vozvrashayem ssilku na 1-y element.
    else {
        cout << "oshibka narusheniye granish!\n";
        return error; // vozvrashaem ssilku na error.
    }
}
// funcsiya schitivanie znachenie iz masivva.
int get(int i)
{
    if(i>=0 && i<10)
        return vals [i];
    else {
        cout << "oshibka narushenie granic!\n";
        return error;
    }
}

