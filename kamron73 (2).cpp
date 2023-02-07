#include <iostream>
#include <cstring>
using namespace std;
void myscrat(char*s1, char *s2, int len = -1);
int main()
{
    char str1[80] = "eto test.";
    char str2[80] = "0987654321";
    mystrcat(str1, str2, 5); // prisoydenyaem 5 simvolov.

    cout << str1 << '\n';
    strcpy(str1, "eto test."); // vostanavlivaem str1.
    mystrcat(str1, str2); // prisoydenyaem vsy stroku.
    cout << str1 << '\n';
    return 0;
}
// polyzovatel versiya funcsi strcat().
void mystrcat (char *s1, char *s2, int len)
{
    // naxodim konec stroki s1.
    while(*s1) s1++;
    if(len == -1) len = strlen(s2);
    while(*s2 && len) {
        *s1 = *s2; // kopiruem simvoli.
        s1++; s2++; len--;
    }
    *s1 = '\n'; // zavershaem stroku s1 nulivom simvolom.
}

