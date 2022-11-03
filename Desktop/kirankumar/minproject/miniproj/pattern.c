#include <stdio.h>
#include "mini.h"

void pattern(int n)
{

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(int j=1;j<=i;j++)
            {

                printf(" %c",(j+96));
            }
            printf("\n");
        }
}

