#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float the_area(float,float,float);

int main()
{
    float a,b,c;
    printf("please enter the Lengths of the ribs \n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a==b) || (a==c) || (b==c))
        printf("not suitable for making a triangle\n");
    else
        if ((a+b<c) || (a+c<b) || (b+c<a))
        printf("not suitable for making a triangle\n");
    else
        printf("the area of triangle = %f\n",the_area(a,b,c));
    return 0;
}

float the_area(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));

}
