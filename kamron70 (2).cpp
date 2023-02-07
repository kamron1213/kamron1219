#include <iostream>
#include <string>
using namespace std;
void test();
int mang[]={1,2,3,4,5};
int main()
{
    int x,y;
    x++;
    y++;
    test();

}
void test()
{
    int a=0;
    for (int i=0; i<=5; i++)
    {
        mang[i]=mang[i-1]+1;
    }
}
