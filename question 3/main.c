#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("please enter the values\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c) && (a+c>b) && (b+c>a))
    {

    if (a==b==c)
        printf("the triangle is Equilateral\n");
    else
        if ((a==b)||(a==c)||(b==c))
        printf("the triangle is Isosceles\n");
    else
        if ((a*a + b*b)==c*c || (a*a + c*c)==b*b || (c*c + b*b)==a*a)

            printf("the triangle is right triangle\n");
    else
        printf("normal triangle\n");
    }
        else printf("not suitable for making a triangle\n");
    return 0;
}
