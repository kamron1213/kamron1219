#include <stdio.h>
extern float c;
int main()
{
    int a =12, b = 45;
    c = 1.1;
    float d = 1.3;
    printf("&d &f\n", sum_int(a, b), sum_Float(c, d));
    /// 57 2.4
    return 0;
}
