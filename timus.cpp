#include<stdio.h>
#include<iostream>

int main()
{
    int n,i,s=0;

    scanf("%d", &n);

    if(n>0)

   {
       for(i=n; i>=1; i--)
        s=s+i;
   }
    else
    {
        while(n<2)
        {
            s=s+n;
            n++;
        }
    }

    printf("%d\n",s );

    return 0;
}
