#include <stdio.h>
#define n 20
char *copy(char *a, char*b);
int main(int argc, const char *argv[])
{
    char a[n]="ajsajfjgfhg";
    char b[n];
    copy(b,a);

    printf("%s",b);

    return 0;
}
char  *copy(char *a, char*b)
{
   while(*b!='\0')
    {

   // char *m;
       *a=*b;
       a++;
       b++;
    }

    *a='\0';

    return a;////函数返回值的类型与函数本身的类型相同
   
}
