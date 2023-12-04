#include<stdio.h>
int f(int n)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(n==1)
    return a;
    if(n==2)
    return b;
    if(n==3)
    return c;
    int s;
    while((n-3)>0)
    s=f(n-1)+f(n-2)+f(n-3);
    return s;
};
int main()
{
    int n;
    printf("enter term>3 which you want to know");
    scanf("%d",&n);
    int t=f(n);
    printf("%d",t);
return 0;
}