#include"stdio.h"

void main()
{
    int i,j,k,n=7;
    for(i=0;i<2*n;i++)
    {
        if(i%2==0)
        {
            for(k=0;k<((2*n)-i)/2;k++)
            {
                printf(" ");
            }
            for(j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
