
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n*2;i!=0;i-=2)
    {
      for(j=n;j>=i/2;j--)
      printf(" ");

        for(k=i*2;k>1;k-=2)
            {
                printf("*");
            }

        printf(" \n");
    }
    return 0;
}
