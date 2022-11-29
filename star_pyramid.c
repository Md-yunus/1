#include<stdio.h>
int main()
{
    int n,s;
    printf("ENter the Number of rows: ");
    scanf("%d",&n);
    s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int t=1;t<=s;t++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        s--;
        printf("\n");
    }
}
