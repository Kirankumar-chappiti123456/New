#include <stdio.h>
#include<string.h>
#include "mini.h"
#define Postive 1    //if str1>str2
#define Negative -1   //if str1<str2
#define Equal 0       //str1 ==str2
#define SameLengthButdifStrings 100 //

int compareTwoString(char str1[], char str2[])
{
    static int i = 0; // store the current index we are at in string

    // calculating the length of str1
    int l1 = strlen(str1);

    //calculating the length of str2
    int l2 = strlen(str2);
    static int c = 0; // store number of equal characters at same index 


    if (l1 > l2)
    {
        return Postive;
    }

    else if(l2>l1)
    {
      return Negative;
    }
    // if value of i is less than length of str1 
    // then their are still more characters left to compare
    else if (i < l1)       //if(l1==l2)
    {
        if (str1[i] == str2[i])
         c++;// count number of equal characeter at same index
        i++;
        compareTwoString(str1, str2);
    }

    if ((c == i)&&(l1==l2) )
    {
        return Equal;
    }
   else if((c!=i) &&(l1==l2) )
    {
      return SameLengthButdifStrings;
    }
      

}
