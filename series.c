//Find the sum of the series X+XX+XXX+ ….. upto n terms. Where X and n are user inputs.

#include<stdio.h>
int main()
{
    int x,n,sum;
    printf("\n Enter a number to find series of the number:");
    scanf("%d",&x);
    printf("\n Times for iteration to be repeated:");
    scanf("%d",&n);
    sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+x;
        x=(x*10)+x;
        printf("Sum of the series is:%d",sum);
    }
    return 1;
}
