#2.	Write C program to print a Magic square for given size ‘n’.

#include<stdio.h>
void main()
{
int n,arr[][],i,j,temp;
printf("Enter the square of the no:");
scanf("%d",&n);
printf("Enter the square i and j values");
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
scanf("arr[%d][%d]",&arr[i][j]);
}
}
}
