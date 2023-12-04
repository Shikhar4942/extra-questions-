#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int arr[i][i];
    for(j=0;j<(i+1)/2;j++)
    {
        for(s=j;s<i-j;s++)
        {
            arr[j][s]=k++;
        }
        for(a=j+1;a>i-j-1;a++)
        {
            arr[a][i-j]=k++;
        }
        for(b=i-j-2;b>j;b--)
        {
            arr[i-j-1][b]=k++;
        }
        for(c=i-j-2;c>j+1;c--)
        {
            arr[c][j]=k++;
        }

    }
    for(j=0;j<i;j++)
{
    for(s=0;s<i;s++)
    {
        printf("%d",arr[j][s]);
    }
    printf("%d\n");
}
}
