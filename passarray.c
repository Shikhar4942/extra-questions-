#include<stdio.h>
float avg(int i,int *p)
{
 int sum=0,j=0;
 float a;
 while(j<i)
 {
 sum=sum+*(p+j);
j++;
 
}
a=sum/i;
return a;
};
int main()
{
    int  j,i;
    scanf("%d",&i);
 int arr[i];
 for(j=0;j<i;j++)
 {
    scanf("%d",&arr[i]);
 }
 int *p=arr;
 float c=avg(i,p);
 printf("%d",c);

}