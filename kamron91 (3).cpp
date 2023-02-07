#include <iostream>
using namespace std;
int main()
{
    int x;
    for(x=0; x<6; x++) {
        if(x==1) cout << "x reaven edinice.\n";
        else if(x==2) cout << "x raven dvum.\n";
        else if(x==3) cout << "x raven trem. \n";
        else if(x==4) cout << "x rabven chetverom.\n";
        else cout <<"x ne padayet v dipazidom ot 1 do 4.\n";
    }
    return 0;
}
