#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#include<pthread.h>
#include<unistd.h>
#include"mini.h"
enum {Postive=1,Negative=-1,Equal=0,SameLengthButdifStrings =100};  
int main()
{

    struct multiarray s3;
    int i,j,k,var,n;
    srand(time(0));

    for( i=0;i<4;i++)
    {
        for( j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
                 s3.array[i][j][k]=rand()%20;
                 }
                 }

    display(s3);
    var=assign(&s3);
    printf("var= %d\n",var);
    if(var%10==0)
    {
        printf("\nenter no of rows:\n");
        scanf("%d",&n);
        pattern(n);
    }

    else if(var%2==0)
    {
         char str1[50], str2[50], c;

    printf("\nEnter first string: ");

    //taking input for str1
    fgets(str1,50,stdin);
    printf("\n");
    printf("Enter second string: ");

    //taking input for str2
    fgets(str2,50,stdin);

    int (*fptr)(char[],char[]);//declaration of function pointer
    fptr=compareTwoString;  
    c = fptr(str1, str2);   //function call using using fpointer
    if (c==Equal)
    {
        //this statement will be printed if both strings are equal
        printf("strings are equal\n");
    }
    else if(c==Postive)
    {
        //this statement will be printed if both strings are not equal
        printf("String 1 is Greater\nstrings are not equal \n");
    }
      else if(c==Negative )
      {
        printf("String 2 is Greater\nstrings are not equal\n");
      }
      else if(c==SameLengthButdifStrings)
      {
        printf("Strings are of Equal lengths and  are UnEqual\n");
      }
    }

    else if(var%2!=0)
    {
        pthread_t thread[2];
        pthread_create(&thread[0], NULL, &capital, NULL);
        sleep(1);
        pthread_create(&thread[1], NULL, &small, NULL);
        pthread_join(thread[0], NULL);
        pthread_join(thread[1], NULL);
        return 0;
    }
    return 0;
}
