#include<stdio.h>
int main()
{
    int x=234 ,a,b;
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    x=a+b+x;
    printf("sum of x=%d",x);

    return 0;

}

