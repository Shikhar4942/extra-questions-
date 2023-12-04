#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("no of freinds");
    scanf("%d",&m);
    printf("no of dishes");
    scanf("%d",&n);

    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   int c=m;
   for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            for(int k=1;k<m-i;k++)
            {
            if(arr[j][i]==1&& arr[j][i]==arr[j+k][i])
            {
                c--;
            }
            }
        }

}
printf("no of unique dishes =%d",c);
}