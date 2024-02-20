#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char oper;
    int v1,v2,answer;
    printf("please enter the values\n");
    scanf("%d%c%d",&v1,&oper,&v2);

    switch (oper)
    {
        case '+': answer=v1+v2;
        printf("the answer = %d",answer);
        break;
        case '-': answer=v1-v2;
        printf("the answer = %d",answer);
        break;
        case '*': answer=v1*v2;
        printf("the answer = %d",answer);
        break;
        case'/' : answer=v1/v2;
        printf("the answer = %d",answer);
        break;
        case '%':answer=v1%v2;
        printf("the answer = %d",answer);
        break;
        default: printf("error\n");
    }
    return 0;
}
