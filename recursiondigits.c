#include<stdio.h>
int sum(int a);
int sum(int a)
{
    int b;
    while(a>0)

    return a%10+sum(a/10);

}

int main()
{
   int digit;
   scanf("%d",&digit);
   printf("%d",sum(digit));

}