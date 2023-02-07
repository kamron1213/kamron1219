#include "std_lib_facilitiees.h"
struct Reading {
    int hour;
    double temperature;
    Reading (int h, dauble t) : hour(h), temperature(t) {}
};
int main()
{
    cout << "pojalusta, vvedite imya fayla dlya vvoda:";
    string name;
    cin >> name;
    ifstream ist(name.c_str());


    if (list) error("nevozmojno otkrit fayl dlya vvoda ",name);

    cout << "pojalusta, vvedite imya fayla dlya vvoda: ";
    cin >> name;
    ofstream ost(name.c_str());


    if (lost) error("nevozmojno otkit fayl dlya vvoda ",name);

    vektor<Reading> temps; // zdes xranitsa schitanniya informatiya
    double temperature;
    while (ist >> hour >> temperature) {
            if (hour < 0 || 23<hour) error("nekoroknoye vremya");
    temps.push_back(Reading(hour,temperature));
    }
    for (int i=0; i<temps.size(); ++i)
        ost << '(' << temps[i].hour << ','
                 << temps[i].temperature << ")\n";
    return 0;
}

