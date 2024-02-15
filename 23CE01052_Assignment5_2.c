#include<stdio.h>
int main()
{
    int a,b,q=0;
    printf("\n Enter the dividend and divisor:");
    scanf("%d %d",&a,&b);
    while(a>b)
    {
        a=a-b;
        q++;
    }
    printf("\n quotient=%d reminder=%d",q,a);
    return 0;
}