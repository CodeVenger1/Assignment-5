#include <stdio.h>
void main()
{
    printf("Enter a number");
    int n;
    int diffDig=0;
    int rep;
    int totalCountDig=0;
    scanf("%d", &n);
    int temp=n;
    while (temp>0)
    {
        totalCountDig++;
        temp/=10;
    }
    printf("Number of digits %d\n", totalCountDig);
        int dig[totalCountDig];
    temp=n;
    int i,j;
    for(i=0;i<totalCountDig;i++)
    {
        dig[i]=temp%10;
        temp/=10;
    }
    for(i=0;i<totalCountDig;i++)
    {
        rep=0;
        for(j=i+1;j<totalCountDig;j++)
        {
            if(dig[i]==dig[j]) rep++;
        }
        if(rep==0) diffDig+=dig[i];
        else diffDig+=0;
    }
    printf("Sum of different digits= %d",diffDig);
}