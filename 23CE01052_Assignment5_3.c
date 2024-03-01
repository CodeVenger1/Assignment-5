#include<stdio.h>
void main()
{
    printf("Enter a number \n");
    int a,i,j,k,l,temp;
    scanf("%d", &a);
    int d[4];
    int c[24];
    temp=a;
    for(i=0;i<4;i++)
    {
        d[i]=temp%10;
        temp/=10;
    }
    int q=0;
    int c=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                for(l=0;l<4;l++)
                {
                        if(i==j || i==k || i==l || j==k || j==l || k==l || k==i ) continue;
                        else
                        {
                        c[q]=(1000*d[i])+(100*d[j])+(10*d[k])+d[l];
                        q++;
                        }
                }
            }
        }
    }
    int h=1;
    for(int w=0;w<24;w++)
    {
        int rep=0;
        for(int e=w+1;e<24;e++)
        {
            if(c[w]==c[e])
            {rep++;}
        }
        if((c[w]>=1000) && (c[w]<=9999))
        {
        if(rep==0)
        {
             printf("%d\t%d\n",h, c[w]);
             h++;
        }
        }
    }
}
