#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<pthread.h>
#include<unistd.h>
#include "mini.h"
void *capital(void *ptr)
{
        char ch=65;
                while(ch <= 90)
                {

                        printf("%c ", ch);
                         printf("\tThread1 id=%ld\n",pthread_self());
                        sleep(1);
                        ch++;
                        sleep(1);
                }
}
void *small(void *ptr)
{
        char ch=97;
                while(ch <= 122)
                {
                        printf("%c ", ch);
                         printf("\tThread2 id=%ld\n",pthread_self());
                        sleep(1);
                        ch++;
                        sleep(1);
              }
        printf("\n");
}
