#include<stdio.h>
int main()
{
    printf("Enter a number \n");
    int a,i,j,k,l,digit,temp;
    scanf("%d", &a);
    int dig[4];
    temp=a;
    for(i=0;i<4;i++)
    {
        dig[i]=temp%10;
        temp/=10;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                for(l=0;l<4;l++)
                {
                    if(dig[i]==dig[j] ||dig[i]==dig[k] ||dig[i]==dig[l] ||dig[j]==dig[k] ||dig[j]==dig[l] ||dig[k]==dig[l] ) continue;
                    printf("%d%d%d%d\n",dig[i],dig[j],dig[k],dig[l]);
                }
            }
        }
    }
}