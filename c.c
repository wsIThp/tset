#include <stdio.h>/////函数的递归调用   实现阶乘
int m,n;

int jiecheng(int n)

{
    int m;
    if(n == 1)//////这个if语句自己写的时候没写导致错误，原因这句代码告诉程序到了这一步就开始返回函数。。。。。
    {
      m = 1;
    }
    m=n*jiecheng(n-1);
   // printf("%d",m);
    return m;
}

int main(int argc, const char *argv[])
{
    jiecheng(5);
    printf("%d\n",jiecheng(5));
    return 0;
}
