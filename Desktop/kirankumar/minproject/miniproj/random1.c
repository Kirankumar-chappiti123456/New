#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int random1(struct multiarray s5)
{
    int i,j,k;
    srand(time(0));
    
    for( i=0;i<4;i++)
    {
        for( j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
                 s5.array[i][j][k]=rand()%20;
                 }
                 }
}

