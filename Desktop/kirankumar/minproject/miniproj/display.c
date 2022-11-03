#include <stdio.h>
#include "mini.h"

void display(struct multiarray s)
{
      printf("The random elements in 3D array are:\n");
for(int i=0;i<4;i++)
{
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("%d\t",s.array[i][j][k]);
            }
            
           printf("\n");
           
}

printf("\n");
} 

}

