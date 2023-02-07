#include <iostream>
using namespace std;
int main()
{
    int a;
    bool tub;
    cout<<"tub sonlar royxati";
    cout<<"chegarani kiriting = '";
    cin>>a;
    for(int i=2; i<=a; i++){
        tub = true;
        for (int j=2; j<i; j++)
            if(i%j==0)tub=false;
        if(tub=true) cout<<" "<<i;
    }
    return 0;
}
