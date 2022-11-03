#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

struct multiarray
{
    int array[4][3][2];
};                  

void random1(struct multiarray s5);
int assign(struct multiarray *s2);
void pattern(int n);
void display(struct multiarray s);
int compareTwoString(char str1[], char str2[]);
void *capital(void *ptr);
void *small(void *ptr);
