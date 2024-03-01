#include <stdio.h>
void main()
{
    printf("Enter a number");
    int n;
    int diff=0;
    int rep;
    int total=0;
    scanf("%d", &n);
    int temp=n;
    while (temp>0)
    {
        total++;
        temp/=10;
    }
    printf("Number of digits %d\n", total);
        int d[total];
    temp=n;
    int i,j;
    for(i=0;i<total;i++)
    {
        d[i]=temp%10;
        temp/=10;
    }
    for(i=0;i<total;i++)
    {
        rep=0;
        for(j=i+1;j<total;j++)
        {
            if(d[i]==d[j]) rep++;
        }
        if(rep==0) diff+=d[i];
        else diff+=0;
    }
    printf("Sum of different digits= %d" diff);
}
