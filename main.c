#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b<=c||b+c<=a||a+c<=b)
    {
        printf("Not triangle\n");
    }else
    {
        if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
            printf("Right triangle\n");
        else if (a*a+b*b>c*c&&b*b+c*c>a*a&&a*a+c*c>b*b)
            printf("Acute triangle\n");
        else
            printf("Obtuse triangle\n");
        if (a==b||b==c||a==c)
            printf("Isosceles triangle\n");
        if (a==b&&b==c)
            printf("Equilateral triangle\n");
    }
    return 0;
}