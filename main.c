#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int mul;
    int qu,rem;

    printf("enter number :");
    scanf("%d %d",&a, &b);
    printf("a=%d",a);
    printf("\n");
    printf("b=%d",b);
    /*mul=a*b;
    printf("\nanswer :%d",mul);*/
    qu=a/b;
    rem=a%b;
    printf("\nquotient :%d",qu);
    printf("\nremainder :%d",rem);


}
