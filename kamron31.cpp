#include <iostream>
using namespace std;

int main()
{
    int t, count;
    for(t=0; t,100; t++){
        count =1;
        for (;;) {
            cout << count << ' ';
            count++;
            if(count==99) break;
        }
        cout <<'\n';
    }
    return 0;
}
