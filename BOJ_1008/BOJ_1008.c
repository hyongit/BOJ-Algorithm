#include <stdio.h>
int main(void)
{
    double a,b; // float는 8자리까지 밖에 출력 안됨
    scanf("%lf %lf",&a, &b); 
    printf("%.9lf",a/b);
    
    return 0;
}
